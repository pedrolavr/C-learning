#include <stdio.h>
#include <ctype.h>

int main(){

    char ch = 'A';
    char lw = 'b';
    char sp = ' ';
    int i = 2;
    int j = 23;


    if(isalpha(ch)) { //Used to check if the variable is a letter (upper or  lowercase)
        printf("%c is is a letter", ch);
    }

    if(isalnum(j)) { //Used to check if the variable is a alphanumeric
        printf("%c is a alphanumeric", j);
    }
    
    if (isspace(sp)) { //Used to check if the variable is a space
    printf("%c is a blank space", sp);
    }

    
    if (islower(lw)) { //Checks if the letter is in lowercase mode
    printf("%c is a letter in lowercase", lw);
    }
}