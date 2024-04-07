#include <stdio.h>

int main(){
     //Most used in place of A LOT if-else's

     char grade;


     again:
     //A lable for goto (in this context, is easier use goto in place of LOOPS)
     printf("\nEnter your grade: ");
     scanf(" %c", &grade);


     switch(grade){
     // Here, we should put the variable that we wanna examine
        
        case 'A':
          printf("You are SO GENIUS!\n");
          break;

         // Always after the case, we need to use :

        case 'B':
          printf("Yeah, you know it\n");
          break;

        case 'C':
          printf("C'mon, i know you can be better...\n");
          break;

        case 'D':
          printf("At least it isn't a F\n");
          break;

        case 'F':
          printf("Okay... Did you write your name?\n");
          break;

        default:
          printf("\nPlease, insert a valid grade");
          goto again;
          //goto return to the lable
        

     }

}