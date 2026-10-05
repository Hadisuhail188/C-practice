#include<stdio.h>
#include<stdlib.h>



int main(){

  char color[20];
  char plural_noun[20];
  char celebrity_First[20]; 
  char celebrity_Last[20];

  printf("Enter a color: ");
  scanf("%s", color);

  printf("Enter a plural noun: ");
  scanf("%s", plural_noun);

  printf("Enter a celebrity name: ");
  scanf("%s %s", celebrity_First, celebrity_Last);

  //we only use & when we are scanning for a single variable, not an array.


  printf("Roses are %s", color);
  printf("\n%s are blue", plural_noun);
  printf("\nI love %s %s", celebrity_First, celebrity_Last);


  return 0;
}