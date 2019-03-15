#include <stdio.h>
#include <string.h>
int main(){
    char inp[101], answer[101];
    scanf("%[^\n]", inp);
    int count = 0, max = 0, start = 0, end = 0, temp, len = strlen(inp);
    for (int i = 0; i < len; i++){
        if (inp[i] != ' ') count++;
        else{
            if (count > max){
                max = count;
                end += count + 1;
                start = i - count;
                count = 0;
            }
            else{
                count = 0;
            }
        }
    }
    if (count > max){
        max = count;
        end = len;
        start = len - count;
        count = 0;
    }
    for (int i = start; i < end; i++){
        printf("%c", inp[i]);
    }
}