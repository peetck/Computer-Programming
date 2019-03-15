#include <stdio.h>
#define PI 3.14159265359
int main(){
    int price;
    float diameter, height, volume, radius;
    scanf("%d %f %f", &price, &diameter, &height);
    radius = diameter / 2;
    volume = height*PI*(radius*radius);
    printf("Volume : %.2fml\nBaht/ml : %.4f\n", volume, price / volume);

}