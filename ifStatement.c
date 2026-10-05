#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int max(int num1, int num2, int num3){
  int result;
  if(num1 > num2 && num1 > num3){
    result = num1;
  }
  else if(num2 > num1 && num2 > num3){
    result = num2;
  }
  else{
    result = num3;
  }
  return result;
}

int main(){
  int num1, num2, num3;

  printf("Please enter three integers: \n");
  scanf("%d %d %d", &num1, &num2, &num3);
  
  int maximum = max(num1, num2, num3);
  printf("The maximum of:\n %d\n %d\n %d\nis %d\n", num1, num2, num3, maximum);

  return 0;
}