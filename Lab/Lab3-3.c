#include <stdio.h>
int main(){
    int sec;
    scanf("%d", &sec);
    printf("%d s = %d d %d h %d m %d s",sec, sec / 86400, sec / 3600 % 24, sec / 60 % 60, sec % 60);
}