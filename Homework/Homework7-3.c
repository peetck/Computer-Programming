#include <stdio.h>
#include <string.h>
int main(){
    char pos, swap[31];
    scanf("%c %s", &pos, swap);
    for (int i = 0; i < strlen(swap); i++){
        if (swap[i] == 'A' && pos == 'L') pos = 'C';
        else if (swap[i] == 'A' && pos == 'C') pos = 'L';
        else if (swap[i] == 'B' && pos == 'C') pos = 'R';
        else if (swap[i] == 'B' && pos == 'R') pos = 'C';
        else if (swap[i] == 'C' && pos == 'L') pos = 'R';
        else if (swap[i] == 'C' && pos == 'R') pos = 'L';
    }
    printf("%c\n", pos);
}