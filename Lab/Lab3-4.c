#include <stdio.h>
#include <math.h>
int main(){
    double first, sec;
    scanf("%lf %lf", &first, &sec);
    printf("%.2lf\n", hypot(first, sec));
}