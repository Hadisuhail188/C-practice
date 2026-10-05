#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
  double num1;
  double num2;
  char operator;




  printf("Enter first number: ");
  scanf(" %lf", &num1);

  printf("Enter an operator: +, -, *, /: ");
  scanf(" %c", &operator);

  printf("Enter second number: ");
  scanf(" %lf", &num2);

  if (operator == '+')
  {
    printf(" %f", num1+num2);
  }
  else if(operator == '-'){
    printf(" %f", num1-num2);
  }
  else if(operator == '*'){
    printf(" %f", num1*num2);
  }
  else if(operator == '/'){
    printf(" %f", num1/num2);
  }
  else{
    printf("ERROR");
  }
  return 0;
}