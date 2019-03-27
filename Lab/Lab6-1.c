#include <stdio.h>
int main(){
    int n[] = {1, 3, 9, 7, 11, 15, 19}, inp, m[] = {2, 20, 8, 10, 4, 6, 16, 18};
    scanf("%d", &inp);
    while (inp < 1 || inp > 20){
        scanf("%d", &inp);
    }
    for (int i = 0; i < 7; i++){
        if (n[i] == inp){
            printf("%d is in N at index [%d]", inp, i);
            return 0;
        }
    }
    for (int i = 0; i < 8; i++){
        if (m[i] == inp){
            printf("%d is in M at index [%d]", inp, i);
            return 0;
        }
    }
    printf("%d is not in neither M nor N", inp);
}