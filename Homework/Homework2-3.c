#include <stdio.h>
int main(){
    char inp[6];
    scanf("%s", inp);
    printf("%1.1s%79s", inp, "");
    printf("%3.2s%77s", inp, "");
    printf("%5.3s%75s", inp, "");
    printf("%7.4s%73s", inp, "");
    printf("%9.5s%71s", inp, "");
}