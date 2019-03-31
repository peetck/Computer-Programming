#include <stdio.h>
#include <string.h>
int main(){
    char inp[201];
    scanf("%[^\n]", inp);
    int count = 0, count_alpha, array[1000][2], status, max = 0;
    for (int i  = 0; i < strlen(inp); i++){
        count_alpha = 0;
        status = 1;
        for (int j = 0; j < count; j++){
            if (inp[i] == array[j][0]){status = 0;break;}
        }
        if (status){
            for (int j = 0; j < strlen(inp); j++){
                if (inp[i] == inp[j]) count_alpha++;
            }
            array[count][0] = inp[i];
            array[count][1] = count_alpha;
            count++;
            if (count_alpha > max) max = count_alpha;
        }
    }
    for (int i = 0; i < count; i++){
        if (array[i][1] == max){printf("%c", array[i][0]);}
    }
}