#include<stdio.h>
#include<stdint.h>
#include<math.h>


int main(){
   char grade;

   printf("Enter your grade: A, B, C, D, F: ");
   scanf("%c", &grade);

   


   switch(grade){
    case 'A':
        printf("You did GREAT\n");
        break;
    case 'B':
        printf("You did GOOD\n");
        break;
    case 'C':
        printf("You did POORLY\n");
        break;
    case 'D':
        printf("You did TERRIBLY\n");
        break;
    case 'F':
        printf("You FAILED  \n");
        break;

    default:
        printf("INVALID GRADE\n");
   }


}