#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char student[20][61], temp[61], inp[61];
    for (int i = 0; i < 20; i++){
        scanf(" %[^\n]", inp);
        for (int j = 0; j < strlen(inp); j++){
            if (j == 0) inp[j] = toupper(inp[j]);
            else if (inp[j - 1] == ' ') inp[j] = toupper(inp[j]);
            else (inp[j] = tolower(inp[j]));
        }
        strcpy(student[i], inp);
    }
    int x = 0;
    while (x < 19){
        if (strcmp(student[x], student[x + 1]) > 0){
            strcpy(temp, student[x]);
            strcpy(student[x], student[x + 1]);
            strcpy(student[x + 1], temp);
            x = 0;
        }
        else x++;
    }
    for (int i = 0; i < 20; i++){
        printf("%s\n", student[i]);
    }
}