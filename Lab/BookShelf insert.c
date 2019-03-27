#include <stdio.h>
#include <string.h>
struct bookshelf{
    char name[1000];
    char author[1000];
    int have;
};
int main(){
    int n, m, count = 0, check;
    char inp[1000], name[1000], author[1000];
    scanf("%d %d", &n, &m);
    if (n == 0 || m == 0){
        printf("Have no book\n");
        return 0;
    }
    struct bookshelf book[n];
    for (int i = 0; i < m; i++){
        scanf(" %[^\n],%[^\n]", name, author);
        check = 1;
        for (int j = 0; j < count; j++){
            if (strcmp(book[j].author, author) == 0 && strcmp(book[j].name, name) == 0){
                check = 0;
                book[j].have += 1;
            }
        }
        if (check){
            strcpy(book[count].name, name);
            strcpy(book[count].author, author);
            book[count].have = 1;
            count++;
        }
    }
    for (int i = 0; i < count; i++){
        printf("%d %s%s\n", book[i].have, book[i].name, book[i].author);
    }
}