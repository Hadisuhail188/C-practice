#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double cubeNumber();

int main(){

  cubeNumber();
  return 0;
}




double cubeNumber(){
  double num;

  printf("Please enter a number to cube: \n");
  scanf("%lf", &num);

  double result = pow(num, 3);
  printf("The cube of your number is: %lf\n", result);

  return result;
}
