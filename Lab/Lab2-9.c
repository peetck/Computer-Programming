#include <stdio.h>
int main(){
    char name[30];
    char sur_name[30];
    char ppl[30];
    char ppl2[30];
    scanf("%s %s %[^\n] %[^\n]", name, sur_name, ppl, ppl2);
    printf("Person 1: %s %s\n", name, sur_name);
    printf("Person 2: %s\n", ppl);
    printf("Person 3: %s", ppl2);
}