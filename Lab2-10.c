#include <stdio.h>
int main(){
    char inp[6];
    scanf("%c %c %c %c %c", &inp[0], &inp[1], &inp[2], &inp[3], &inp[4]);
    for (int i = 0; i < 5;i++){
        if (i % 2 == 0) printf("%c\n", inp[i] + 1);
        else printf("%c\n", inp[i]);
    }
}