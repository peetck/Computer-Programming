#include <stdio.h>
#include <math.h>
int main(){
    double first, sec;
    scanf("%lf %lf", &first, &sec);
    printf("Perimeter of rectangle = %.4lf units\n", 2 * (first + sec));
}