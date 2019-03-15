#include <stdio.h>
int main(){
    char name[31], surname[31];
    int student_id, dd,mm,yy;
    float gpa;
    scanf("%s %s %d %d/%d/%d %f", name, surname, &student_id, &dd, &mm, &yy, &gpa);
    printf("Fullname: %s %s\nID: %d\nDOB: %02d-%02d-%d\nGPA: %.2f",name, surname, student_id, dd, mm, yy, gpa);
}