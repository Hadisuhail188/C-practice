#include<stdio.h>
#include<stdlib.h>


void sayHi(char name[], int age){
  printf("Hello %s, you are %d years old\n", name, age);
}


int main(){
  sayHi("Ahmad", 25);
  sayHi("Oscar", 30);
  sayHi("Mike", 35);

  
  return 0;
}

