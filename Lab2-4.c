#include <stdio.h>
int main(){
    char str[13] = "Hello, world";
    printf("123456789012345678901234567890\n");
    printf("%s*\n", str);
    printf("%20s*\n", str);
    printf("%.20s*\n", str);
    printf("%-20s*\n", str);
    printf("%.10s*\n", str);
    printf("%-10s*\n", str);
    printf("%25.10s*\n", str);
    printf("%25.5s*\n", str);
    printf("%-25.10s*\n", str);
}