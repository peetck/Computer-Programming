#include <stdio.h>
#define PI 3.141592654
struct ConeSurface{
    double r, L;
}first, sec;
int main(){
    scanf("%lf %lf", &first.r, &first.L);
    printf("%.2lf\n", (PI*first.r*first.L) + (PI*(first.r*first.r)));
    scanf("%lf %lf", &sec.r, &sec.L);
    printf("%.2lf\n", (PI*sec.r*sec.L) + (PI*(sec.r*sec.r)));
}