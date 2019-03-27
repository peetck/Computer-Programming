#include <stdio.h>
int main(){
    double f, s, t, max, min;
    scanf("%lf %lf %lf", &f, &s, &t);
    if (f > s && f > t) max = f;
    if (s > f && s > t) max = s;
    if (t > f && t > s) max = t;
    if (f < s && f < t) min = f;
    if (s < f && s < t) min = s;
    if (t < f && t < s) min = t;
    printf("%.2lf", (f + s + t) - max - min);
}