#include <stdio.h>
#include <stdlib.h>
int main(){
    int case1 = 0, case2 = 0, case3 = 0, case4 = 0, sum_age = 0, age, height, weight;
    float sum_height = 0, sum_weight = 0;
    for (int i = 0; i < 50; i++){
        scanf("%d %d %d", &age, &height, &weight);
        if (age >= 20 && height >= 160) case1++;
        if (age < 20 && (height <= 180|| weight >= 60)) case2++;
        if (age >= 30 && weight >= 40 && weight <= 80) case3++;
        if (age < 40 && (weight < 85 || height <= 200)) case4++;
        sum_weight += weight;
        sum_height += height;
        sum_age += age;
    }
    printf("Age >= 20 and Height >= 160: %d\nAge < 20 and Height <= 180 or Weight >= 60: %d\n", case1, case2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\nAge < 40 and Weight < 85 or Height <= 200: %d\n", case3, case4);
    printf("Average Age: %d\nAverage Height: %.2f\nAverage Weight: %.2f", sum_age/50, sum_height/50, sum_weight/50);
}