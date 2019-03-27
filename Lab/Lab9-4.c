#include <stdio.h>
int main(){
    int valueA;
    int valueB;
    int *ptrA = &valueA;
    int *ptrB = &valueB;
    scanf("%d %d", &valueA, &valueB);
    int tmp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = tmp;
    printf("%d %d", valueA, valueB);
}