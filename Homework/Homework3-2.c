#include <stdio.h>
int main(){
    int price, buy;
    float price2, percent;
    scanf("%d %f %d", &price, &percent, &buy);
    price2 = price - (price * percent / 100);
    printf("%.2f\n", price2 * buy);
}