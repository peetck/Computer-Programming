#include <stdio.h>
int main(){
    char inp[4][31];
    scanf("%s %s %s %s", inp[0], inp[1], inp[2], inp[3]);
    for (int i = 1; i < 5; i++){
        printf("String %d: %.*s\n", i, i + 2, inp[i - 1]);
    }
}