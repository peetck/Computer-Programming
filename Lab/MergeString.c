#include <stdio.h>
#include <string.h>
int main(){
    char first[201], sec[201];
    scanf("%s %s", first, sec);
    int count = 0, count2 = 0;
    for (int i = 0; i < strlen(first) + strlen(sec); i++){
       if (count < strlen(first)){
            printf("%c", first[count]);
            count++;
       }
       if (count2 < strlen(sec)){
            printf("%c", sec[count2]);
            count2++;
       }
    }
}