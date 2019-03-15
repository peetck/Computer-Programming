#include <stdio.h>
#include <ctype.h>
int main(){
    char grade;
    scanf("%c", &grade);
    switch(toupper(grade)){
        case 'A': printf("Genius");break;
        case 'B': printf("Good");break;
        case 'C': printf("Try Harder");break;
        case 'D' : printf("Very Bad");break;
        case 'F': printf("Fail");break;
        default :printf("Invalid Input");
    }
}