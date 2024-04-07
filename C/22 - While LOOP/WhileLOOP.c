#include <stdio.h>
#include <string.h>

int main()
{
    // While LOOP = Repeats a section of code possibly unlimited times
    // While some condition remains true
    // A while loop might not execute at all

    char name[25];
    printf("\nWhat's your name? :");
    //For names that may contain spaces, we're gonna use fgets()

    fgets(name, 25, stdin);
    //How to use fgets() -  (the variable will be assingned, the max size, what kinda);

    name[strlen(name) - 1] = '\0';
    //This line is used to define the end of name[];

    while(strlen(name) == 0)
    //Just one condition in the while loop will be enough

    {
        printf("\nYou didn't enter your name");
        printf("\nWhat's your name? :");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    strupr(name);
    printf("\nWelcome %s!", name);
    
    return 0;
}