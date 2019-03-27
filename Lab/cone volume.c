#include <stdio.h>
#define PI 3.141592654
struct cone{
    double r, h;
}first, sec;
int main(){
    scanf("%lf %lf", &first.r, &first.h);
    printf("%.2lf\n", (PI*((first.r*first.r)*first.h))/3);
    scanf("%lf %lf", &sec.r, &sec.h);
    printf("%.2lf\n", (PI*((sec.r*sec.r)*sec.h))/3);
}