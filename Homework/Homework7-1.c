#include <stdio.h>
int coin_change(int money){
    if (money == 0) return 1;
    if (money < 0) return 0;
    int c = 0;
    c += coin_change(money - 1);
    c += coin_change(money - 2);
    c += coin_change(money - 5);
    c += coin_change(money - 10);
    return c;
}
int main(){
    int money;
    scanf("%d", &money);
    printf("method = %d\n", coin_change(money));
}