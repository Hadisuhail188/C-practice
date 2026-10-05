#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(){

  int age = 30;
  //Pointer to store the memory address of age
  int * page = &age;

  double GPA = 3.5;
  //Pointer to store the memory address of GPA
  double * pGPA = &GPA;

  char grade = 'A';
  //Pointer to store the memory address of grade
  char * pgrade = &grade;


  printf("The memory address of age is: %p\n", &age);


  printf("The memory address of GPA is: %p\n", &GPA);
  printf("The memory address of grade is: %p\n", &grade);

}