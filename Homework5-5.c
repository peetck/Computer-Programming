#include <stdio.h>
int main(){
    int inp, sum = 0, last = 1;
    while (1){
        scanf("%d", &inp);
        if (inp == 0) break;
        sum += last % inp;
        last = inp;
    }
    printf("%d", sum);
}