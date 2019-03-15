#include <stdio.h>
int main(){
    int f, s;
    scanf("%d %d", &f, &s);
    if (f == s) printf("%d + %d = %d", f, s, f+s);
    else printf("%d - %d = %d", f, s, f-s);
}