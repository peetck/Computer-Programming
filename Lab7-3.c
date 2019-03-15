#include <stdio.h>
#include <math.h>
double perimeter(double a, double b){
    return a + b + sqrt(pow(a, 2) + pow(b, 2));
}
double area(double a, double b){
    return (a * b) / 2;
}
int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Perimeter: %.2lf\nArea: %.2lf\n", perimeter(a, b), area(a, b));
}