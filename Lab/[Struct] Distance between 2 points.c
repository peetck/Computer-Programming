#include <stdio.h>
#include <math.h>
typedef struct{
    double x;
    double y;
}point;

double calculateDistance(point p1, point p2){
    return sqrt((pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2)));
}

int main(){
    point p1, p2;
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    printf("Distance between two points (x1,y1) and (x2,y2) : %.2lf\n", calculateDistance(p1, p2));
}