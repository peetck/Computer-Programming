#include <stdio.h>
int main(){
    double first[3][3], sec[3][3], sum;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%lf", &first[i][j]);
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%lf", &sec[i][j]);
        }
    }
    printf("A x B\n");
    for (int pos = 0; pos < 3; pos++){
        for (int i = 0; i < 3; i++){
            sum = 0;
            for (int j = 0; j < 3; j++){
                sum += first[pos][j] * sec[j][i];
            }
            printf("%.2lf ", sum);
        }
        printf("\n");
    }
}