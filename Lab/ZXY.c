#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char inp[201];
    scanf("%[^\n]", inp);
    int x = 0;
    while (x < strlen(inp) - 1){
        if (inp[x] < inp[x + 1]){
            char temp = inp[x + 1];
            inp[x + 1] = inp[x];
            inp[x] = temp;
            x = 0;
        }
        else x++;
    }
    printf("%s", inp);
}