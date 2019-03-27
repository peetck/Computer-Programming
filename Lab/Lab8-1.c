#include <stdio.h>
#include <string.h>
struct student_info{
    char name[61], surname[61], gender[61];
    int age, student_id;
    float gpa;
}first;
int main(){
    scanf("%s %s %s %d %d %f", first.name, first.surname, first.gender, &first.age, &first.student_id, &first.gpa);
    if (strcmp(first.gender, "Male") == 0){
        printf("Mr");
    }
    else{
        printf("Miss");
    }
    printf(" %c %s (%d) ID: %d GPA %.2f\n", first.name[0], first.surname, first.age, first.student_id, first.gpa);
}