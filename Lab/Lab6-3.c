#include <stdio.h>
int main(){
    double array[3][3];
    int status = 1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%lf", &array[i][j]);
        }
    }
    if (array[0][0] == 0 || array[1][1] == 0 || array[2][2] == 0){
        status = 0;
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == 0 && j == 0) continue;
            else if (i == 1 && j == 1) continue;
            else if (i == 2 && j == 2) continue;
            else{
                if (array[i][j] != 0) status = 0;
            }
        }
    }
    if (status) printf("This is a scalar matrix");
    else printf("This is not a scalar matrix");
}