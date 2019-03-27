#include <stdio.h>
int main(){
    int inp;
    scanf("%d", &inp);
    for (int i = 0; i < inp; i++){
        for (int j = 0; j < inp; j++){
            if (j == i || j == inp - i - 1) printf("-");
            else printf("#");
        }
        printf("\n");
    }
}