#include <stdio.h>
int main(){
    int inp, count = 1;
    scanf("%d", &inp);
    for (int i = 0; i < inp; i++){
        for (int j = 1; j < inp - i; j++){
            printf(" ");
        }
        for (int j = 0; j < count; j++){
            printf("*");
        }
        count += 2;
        printf("\n");
    }
}