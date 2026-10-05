#include<stdlib.h>
#include<stdio.h>


int main(){

  int luckyNumbers[] = {4, 8, 15, 16, 32, 43};
  luckyNumbers[1] = 473;
  printf("%d\n", luckyNumbers[1]);

  
  int emptyAray[10];
  emptyAray[1] = 80;
  printf("%d", emptyAray[1]);

  return 0;
}