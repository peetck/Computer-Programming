#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int time;
    scanf("%d", &time);
    int array[time][2], count = 0, status;
    char inp;
    for (int i = 0; i < time; i++){
        scanf(" %c", &inp);
        inp = tolower(inp);
        status = 1;
        for (int j = 0; j < count; j++){
            if (array[j][0] == inp){
                array[j][1] += 1;
                status = 0;
            }
        }
        if (status){
            array[count][0] = inp;
            array[count][1] = 1;
            count++;
        }
    }
    for (int i = 0; i < count; i++){
        printf("%c: %d\n", array[i][0], array[i][1]);
    }
}