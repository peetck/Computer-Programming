#include <stdio.h>
#include <string.h>
struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
};
int main(){
    int n;
    char select[10];
    scanf("%d", &n);
    struct Record data[n];
    for (int i = 0; i < n; i++){
        scanf("%s %s %li %li", data[i].id, data[i].name, &data[i].salary, &data[i].sales);
    }
    scanf("%s", select);
    for (int i = 0; i < n; i++){
        if (strcmp(data[i].id, select) == 0){
            printf("%s\n%s\n%li\n%.2f\n%li\n%.2f\n", data[i].id, data[i].name, data[i].sales, data[i].sales * 0.02, data[i].salary, data[i].salary + (data[i].sales*0.02));
            return 0;
        }
    }
    printf("ID not found !!!");
}