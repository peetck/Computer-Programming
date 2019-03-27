#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char alpha[27] = "abxypqrmncedkljoshtufvzgwi";
    char inp[201];
    int status, pos;
    scanf("%[^\n]", inp);
    for (int i = 0; i < strlen(inp); i++){
        if (inp[i] == ' '){
            printf(" ");
            continue;
        }
        if (isupper(inp[i])) status = 1;
        else status = 0;
        for (int j = 0; j < 26; j++){
            if (alpha[j] == tolower(inp[i])){
                pos = j - 5;
                if (pos < 0){
                    pos += 26;
                }
                if (status) printf("%c", toupper(alpha[pos]));
                else printf("%c", alpha[pos]);
            }
        }
    }
}