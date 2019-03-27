#include <stdio.h>
#include <ctype.h>
int main(){
    char inp;
    scanf("%c", &inp);
    if (isalpha(inp)){
        if (isupper(inp)){
            printf("uppercase");
        }
        else{
            printf("lowercase");
        }
    }
    else if (isdigit(inp)){
        printf("number");
    }
    else{
        printf("error");
    }
}