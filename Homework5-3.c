#include <stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    if (m > n){
        for (int i = m; i > n - 1; i--){
            printf("%d ", i);
        }
    }
    if (n > m){
        for (int i = m; i < n + 1; i++){
            printf("%d ", i);
        }
    }
}