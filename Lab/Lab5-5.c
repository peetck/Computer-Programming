#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while (n % 2 != 0 || (n % 2 == 0 && n < 2)){
        printf("error\n");
        scanf("%d", &n);
    }
    for (int i = 1; i < (n/2) + 1;i++){
        printf("%d", i);
    }
    for (int i = n/2; i > 0; i--){
        printf("%d", i);
    }
}