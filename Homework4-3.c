#include <stdio.h>
int main(){
    int price, buy;
    float percent;
    scanf("%d %f %d", &price, &percent, &buy);
    float discount = (price * buy) - ((price*buy) * percent /100);
    float buy2get1 = price * (buy - (buy/3));
    if (buy2get1 < discount){
        printf("Buy 2 Get 1\n%.2f", buy2get1);
    }
    else{
        printf("Discount %.0f%%\n%.2f", percent, discount);
    }
}