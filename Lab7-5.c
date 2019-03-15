#include <stdio.h>
double findMin(double array[], int time){
    double min = array[0];
    for (int i = 1; i < time; i++){
        if (array[i] < min) min = array[i];
    }
    return min;
}
double findMax(double array[], int time){
    double max = array[0];
    for (int i = 1; i < time; i++){
        if (array[i] > max) max = array[i];
    }
    return max;
}
double findAvg(double array[], int time){
    double sum = 0;
    for (int i = 0; i < time; i++){
        sum += array[i];
    }
    return sum/time;
}
double getValue(){
    double value;
    scanf("%lf", &value);
    return value;
}
int main(){
    int time;
    scanf("%d", &time);
    double array[time];
    for (int i = 0; i < time; i++){
        array[i] = getValue();
    }
    double min, max, avg;
    min = findMin(array, time);
    max = findMax(array, time);
    avg = findAvg(array, time);
    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf\n", time, min, max, avg);
}