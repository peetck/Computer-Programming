#include <stdio.h>
#include <string.h>
int main(){
    char inp[101], inverse[101];
    scanf("%[^\n]", inp);
    int len = strlen(inp), count = 0;
    for (int i = len - 1; i > -1; i--){
        inverse[count] = inp[i];
        count++;
    }
    inverse[count] = '\0';
    if (strcmp(inverse, inp) == 0) printf("It is Palindrome.");
    else printf("It is not Palindrome.");
}