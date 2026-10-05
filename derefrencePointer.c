#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){


  int age = 30;
  
  int * page = &age;//Pointer to store the memory address of age

  printf("The value of age is: %d\n", age);//Print the value of age

  printf("The memory address of age is: %p\n", &age);//Print the memory address of age

  printf("The value of age using pointer is: %d\n", *&age);//Dereference the pointer to get the value of age
}