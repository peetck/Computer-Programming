#include <stdio.h>
int main(){
    char inp[6];
    scanf("%s", inp);
    for (int i = 2; i < 5; i++){
        printf("%c", inp[i]);
    }
    printf("%c%c", inp[0], inp[1]);
}