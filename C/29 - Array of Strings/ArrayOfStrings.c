#include <stdio.h>
#include <string.h>

int main() 
{
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};
    

    /*
     cars[0] = "Tesla";

     We cannot directly assign a new value
     So we must use the cipy function

    */


     strcpy(cars[0], "Tesla");
     //This is used to update some value


     for(int i = 0;  i < sizeof(cars)/sizeof(cars[0]);   i++)
     {
         printf("%s\n", cars[i]);
     }

}