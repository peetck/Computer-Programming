#include <stdio.h>
int main(){
    int inp, sum = 0;
    while (1){
        scanf("%d", &inp);
        if (inp == -9){
            break;
        }
        sum += inp;
    }
    printf("%d", sum);
}