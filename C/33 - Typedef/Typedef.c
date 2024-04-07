#include <stdio.h>
#include <string.h>

// typedef char twenty[20];

struct User
{
    char name[20];
    char password[20];
    double ID;
};

int main()
{
    //Typedef = Reserved keyword that gives an existing datatype a "nickname"
    /* 
       Instead use this :
       char name[] = "CompleteName"

       We can just
    */
     

     struct User user1 = {"Pedro", "28402842", 950022};




 //   twenty name = "Pedro";
 //  dataype variableName = value;
}