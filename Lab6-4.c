#include <stdio.h>
#include <string.h>
int main(){
    char inp[101];
    scanf("%[^\n]", inp);
    for (int i = strlen(inp) - 1; i > -1; i--){
        printf("%c", inp[i]);
    }
    printf("\n");
}