#include <stdio.h>
int main(){
    char message[101];
    scanf("%s", message);
    char *begin_ptr = message;
    char *end_ptr = message;
    while(*end_ptr != '\0') {
      end_ptr++;
    }
    end_ptr--;
    while (begin_ptr < end_ptr){
        char temp = *begin_ptr;
        *begin_ptr = *end_ptr;
        *end_ptr = temp;
        begin_ptr++;
        end_ptr--;
    }
    printf("%s", message);
}