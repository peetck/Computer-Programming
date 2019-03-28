#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
    char inp[201], vw[] = {'a', 'e', 'i', 'o', 'u'};
    int vowel = 0, status, alpha = 0;
    scanf("%s", inp);
    for (int i = 0; i < strlen(inp); i++){
        status = 1;
        for (int j = 0; j < 5; j++){
            if (tolower(inp[i]) == vw[j]){
                vowel++;
                status = 0;
            }
        }
        if (status){alpha++;}
    }
    printf("consonant : %d\nvowel     : %d", alpha, vowel);
}