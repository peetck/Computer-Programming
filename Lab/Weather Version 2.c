#include <stdio.h>
#include <string.h>
struct Weather {
    char outlook[9];
    int temperature;
    int humidity;
    char wind;
};
void playing_decision(struct Weather info[], int n){
    for (int i = 0; i < n; i++){
        if (strcmp(info[i].outlook, "overcast") == 0) printf("yes\n");
        else if (strcmp(info[i].outlook, "rain") == 0){
            if (info[i].wind == 'F') printf("yes\n");
            else printf("no\n");
        }
        else if (strcmp(info[i].outlook, "sunny") == 0){
            if (info[i].humidity > 77.5) printf("no\n");
            else printf("yes\n");
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    struct Weather info[n];
    for (int i = 0; i < n; i++){
        scanf("%s %d %d %c", info[i].outlook, &info[i].temperature, &info[i].humidity, &info[i].wind);
    }
    playing_decision(info, n);
}