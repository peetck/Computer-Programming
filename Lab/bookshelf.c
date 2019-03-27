#include <stdio.h>
#include <string.h>
struct Book {
    char id[10];
    char name[100];
    char author[100];
};
int main(){
    int n;
    char select[99];
    scanf("%d", &n);
    struct Book book[n];
    scanf("%s", select);
    for (int i = 0; i < n; i++){
        scanf("%s %s %s", book[i].id, book[i].name, book[i].author);
        if (strcmp(book[i].id, select) == 0){
            printf("%s %s %s", book[i].id, book[i].name, book[i].author);
            return 0;
        }
    }
    printf("Not Found");
}