#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct people{
    char name[61], surname[61], gender[7], id[61];
    int age;
    double gpa;
}ppl[20];
int main(){
    for (int i = 0; i < 20; i++){
        scanf("%s %s %s %d %s %lf", ppl[i].name, ppl[i].surname, ppl[i].gender, &ppl[i].age, ppl[i].id, &ppl[i].gpa);
    }
    char select[61];
    scanf("%s", select);
    int x = 0;
    for (int i = 0; i < strlen(select); i++){select[i] = tolower(select[i]);}
    while (x < 19){
        if ((strcmp(ppl[x].name, ppl[x + 1].name) > 0 && strcmp(select, "name") == 0) || (strcmp(ppl[x].surname, ppl[x + 1].surname) > 0 && strcmp(select, "surname") == 0) || strcmp(ppl[x].id, ppl[x + 1].id) > 0 && strcmp(select, "id") == 0){
            struct people temp;
            temp = ppl[x];
            ppl[x] = ppl[x + 1];
            ppl[x + 1] = temp;
            x = 0;
        }
        else x++;
    }
    for (int i = 0; i < 20; i++){
        if (strcmp(ppl[i].gender, "Male") == 0) printf("Mr");
        else printf("Miss");
        printf(" %c %s (%d) ID: %s GPA %.2lf\n", ppl[i].name[0], ppl[i].surname, ppl[i].age, ppl[i].id, ppl[i].gpa);
    }
}