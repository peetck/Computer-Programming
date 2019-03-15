#include <stdio.h>
int main(){
    float f_number = 3.1415;
    int n1 = 12345, n2 = -6789, n3=24500;
    printf("123456789012345678901234567890\n");
    printf("%d %d %d\n", n1, n2, n3);
    printf("%3d %3d %3d\n", n1, n2, n3);
    printf("%8d %8d %8d\n", n1, n2, n3);
    printf("%08d %08d %08d\n", n1, n2, n3);
    printf("%-8d %-8d %-8d\n", n1, n2, n3);
    printf("%10f\n", f_number);
    printf("%3f\n", f_number);
    printf("%-10f\n", f_number);
    printf("%-10.3f\n", f_number);
    printf("%10.2f\n", f_number);
    printf("%.1f\n", f_number);
    printf("%.3f\n", f_number);
}