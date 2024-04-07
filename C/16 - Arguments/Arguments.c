#include <stdio.h>

void identification(char name[], int age){

    //printf("\nYour name is X");            -       In place of X, I wanna put the name
    //printf("\nYou are Y years old!");      -       In place of Y, I wanna put the age


    //But our identification() function is unware of our main() variables
    //So, we need to DECLARE our main variables preceding with their respectives data types

    printf("\nYour name is %s", name);
    printf("\nYou are %d years old!", age);

}

int main(){

    //Unfortunatelly, functions cannot see inside other functions
    char name[] = "Jerry";
    int age = 18;

    identification(name, age);
    //To make our identification function aware of our main variables, we must pass our variables as arguments inside the parenthesis
}