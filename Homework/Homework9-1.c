#include <stdio.h>
void swap(double *f, double *s, double *t){
    double temp = *t;
    *t = *s;
    *s = *f;
    *f = temp;
}
int main(){
    double f, s, t;
    scanf("%lf %lf %lf", &f, &s, &t);
    swap(&f, &s, &t);
    printf("%.2lf %.2lf %.2lf", f, s, t);
}