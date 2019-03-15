#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char inp[101], want;
    int pos[strlen(inp)], count = 0;
    scanf("%[^\n] %c", inp, &want);
    for (int i = 0; i < strlen(inp); i++){
        if (tolower(inp[i]) == want){
            pos[count] = i + 1;
            count++;
        }
    }
    if (count != 0){
        printf("There is/are %d \"%c\" in the above sentences.\n", count, want);
        printf("Position: ");
        for (int i = 0; i < count; i++){
            if (i == count - 1) printf("%d", pos[i]);
            else printf("%d, ", pos[i]);
        }
    }
    else{
        printf("Not found.");
    }
}