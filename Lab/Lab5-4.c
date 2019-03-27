#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, count = 1;
    scanf("%d", &n);
    while (count < n + 1){
        printf("%d ", count);
        count++;
    }
}