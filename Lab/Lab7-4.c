#include <stdio.h>
#include <ctype.h>
void printFarenheit(double fahrenheit){
    printf("%.2lf f\n", fahrenheit);
}
void printCelcius(double celcius){
    printf("%.2lf c\n", celcius);
}
double celsiusToFahrenheit(double celcius){
    printFarenheit(32 + celcius * (180.0/100.0));
}
double fahrenheitToCelcius(double fahrenheit){
    printCelcius((fahrenheit - 32) / (180.0/100.0));
}
int main(){
    double inp;
    char c;
    scanf("%lf %c", &inp, &c);
    if (tolower(c) == 'c') celsiusToFahrenheit(inp);
    else fahrenheitToCelcius(inp);
}