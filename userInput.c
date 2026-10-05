#include<stdlib.h>
#include<stdio.h>


int main(){

  char name[20];
  int age;

  printf("Enter your name: ");
  fgets(name, 20, stdin);

  //difference between scanf and fgets:
  // scanf reads input until a whitespace is encountered, while fgets reads an entire line including spaces until a newline character or the specified limit is reached.

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Your name is %s and your age is %d", name, age);

  return 0;
}