#include <stdio.h>
#include <string.h>
int main(){
    char inp[201];
    scanf("%[^\n]", inp);
    int max = 0, min = 200, pass[200], count = 0, check;
    for (int i = 0; i < strlen(inp); i++){
        int count_alpha = 0;
        for (int j = 0; j < strlen(inp); j++){
            if (inp[i] == inp[j]) count_alpha++;
        }
        if (count_alpha > max) max = count_alpha;
        if (count_alpha < min) min = count_alpha;
    }
    if (max == min) printf("%s", inp);
    else{
        for (int i = 0; i < strlen(inp); i++){
            int count_alpha = 0;
            for (int j = 0; j < strlen(inp); j++){
                if (inp[i] == inp[j]) count_alpha++;
            }
            if (count_alpha == max){
                check = 1;
                for (int j = 0; j < count; j++){
                    if (inp[i] == pass[j]) check = 0;
                }
                if (check){
                    printf("%c", inp[i]);
                    pass[count] = inp[i];
                    count++;
                }
            }
        }
    }
}