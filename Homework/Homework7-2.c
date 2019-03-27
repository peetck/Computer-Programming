#include <stdio.h>
char fibonacci(char first, char sec ,int count){
    if (count == 1) printf("%c", first);
    else if (count == 2) printf("%c", sec);
    else{
        fibonacci(first, sec, count - 2);
        fibonacci(first, sec, count - 1);
    }
}
int main(){
    char first, sec;
    int time;
    scanf("%c %c %d", &first, &sec, &time);
    fibonacci(first, sec, time);
}