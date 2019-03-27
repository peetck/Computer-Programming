#include <stdio.h>
int main(){
    int value = 20;
    int *ptr = &value;
    printf("%d", *ptr);
}