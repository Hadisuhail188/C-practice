#include<stdlib.h>
#include<stdio.h>


int main(){

  int age = 40;
  double gpa = 2.5;
  char grade = 'C';
  char phrase[] = " Giraffe Academy";

  printf("Age: %d\n", age);
  printf("GPA: %.2f\n", gpa);

  grade = 'A';
  printf("Grade: %c\n", grade);
  printf("Phrase: %s\n", phrase);

  return 0;
}