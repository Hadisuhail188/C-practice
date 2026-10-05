#include<stdio.h>
#include<stdlib.h>



int main(){

  char characterName[] = "John";
  int characterAge = 35;

  printf("There once was a man named %s\n", characterName);
  printf("He was %d years old.\n", characterAge);

  characterAge = 40;
  printf("He really liked the name %s\n", characterName);
  printf("But he didn't like being %d.\n", characterAge);


  return 0;
}