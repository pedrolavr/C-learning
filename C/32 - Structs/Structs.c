#include <stdio.h>
#include <string.h>

struct Player
{
   char name[12];
   int score;
};

int main ()
{
    //Struct = Collection of related members ("variables")
    //         They can be of different data types
    //         listed under one name in a block of memory
    //         VERY SIMILAR to classes in other languages (but no methods)


    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Crash");
    // strcpy = "Rename" function
    player1.score = 20;

    strcpy(player2.name, "Ellis");
    player2.score = 15;

    printf("%s\n", player1.name);
    printf("%s\n", player2.name);

    printf("%d\n", player1.score);
    printf("%d\n", player2.score);

    return 0;    
 }