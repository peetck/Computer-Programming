#include <stdio.h>
#include <string.h>
int main(){
    char first[201], sec[201];
    scanf("%[^\n] %[^\n]", first, sec);
    if (strlen(first) > strlen(sec)) printf("%s", first);
    else if (strlen(first) < strlen(sec)) printf("%s", sec);
    else printf("\\7");
}