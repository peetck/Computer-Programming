#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int odd_hp, even_hp, hp;
    char inp[21];
    scanf("%d", &hp);
    scanf("%s", inp);
    odd_hp = hp;
    even_hp = hp;
    for (int i = 0; i < strlen(inp); i++){
        if (inp[i] == inp[i + 1] && inp[i] == inp[i + 2]){
            if (((int)inp[i] - 48) % 2 == 0) odd_hp -= 3;
            else even_hp -= 3;
        }
        if (((int)inp[i] - 48) % 2 == 0) odd_hp--;
        else even_hp--;
    }
    if (even_hp == odd_hp) printf("- %d %d", even_hp, odd_hp);
    else if (even_hp > odd_hp) printf("0 %d %d", even_hp, odd_hp);
    else printf("1 %d %d", even_hp, odd_hp);
}