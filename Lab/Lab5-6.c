#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    float avg, inp, sum = 0, max, min;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%f", &inp);
        sum += inp;
        if (i == 0){
            max = inp;
            min = inp;
        }
        if (inp > max){
            max = inp;
        }
        if (inp < min){
            min = inp;
        }
    }
    avg = sum/n;
    printf("%d Values\nMin: %.3f\nMax: %.3f\nAvg: %.2f\n", n, min, max, avg);
}