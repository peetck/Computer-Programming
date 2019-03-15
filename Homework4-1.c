#include <stdio.h>
int main(){
    char inp;
    scanf("%c", &inp);
    if (inp >= 65 && inp <= 90){
        printf("%c", inp+32);
    }
    else if (inp >= 97 && inp <= 122){
        printf("%c", inp-32);
    }
    else{
        printf("error");
    }
}