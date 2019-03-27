#include <stdio.h>
int main(){
  int value = 200;
  int *ptrValue = &value;
  printf("%d", *ptrValue);
}