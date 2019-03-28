#include <stdio.h>
#include <string.h>
int main(){
    char array[10][201];
    for (int i = 0; i < 10; i++){
        scanf("%s", array[i]);
    }
    int x = 0;
    while (x < 9){
        if (strcmp(array[x], array[x + 1]) > 0){
            char temp[201];
            strcpy(temp, array[x]);
            strcpy(array[x], array[x + 1]);
            strcpy(array[x + 1], temp);
            x = 0;
        }
        else x++;
    }
    for (int i = 0; i < 10; i++){
        printf("%s\n", array[i]);
    }
}