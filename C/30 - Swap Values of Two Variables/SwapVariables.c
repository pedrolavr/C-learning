#include <stdio.h>
#include <string.h>

int main()
{
    char x[15] = "water";
    char y[15] = "soda";
    //To prevent some errors like:
    //  x = -
    //  y = water
    //
    // We need to set the same size for all the arrays
    //
    char temp[15];

    strcpy(temp, x);
    //We will copy the content of X over temp
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

}