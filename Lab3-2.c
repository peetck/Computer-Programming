#include <stdio.h>
#include <math.h>
int main(){
    double first, sec, third, fourth, sum;
    scanf("%lf %lf %lf %lf", &first, &sec, &third, &fourth);
    sum = first + sec + third + fourth;
    printf("Summation is %.2f\nAverage is %.3f\n", sum, sum / 4);
}