#include <stdio.h>

void hello(char name[], int age); //This is a Function Prototype - If we not insert the correct arguments, the program will indicate a error


int main()
{
   //Function Prototype - Is a function declaration, but without a body, before main()
   //It ensures that calls to a function are made with the correct arguments
   
    char name[] = "Henry";
    int age = 21;

    hello(name, age);
    //The function prototype will be useful here, if we pass the incorrect arguments

   return 0;
}

void hello(char name[], int age)
{
  printf("\nHello, %s", name);
  printf("\nYou're %d years old", age);

}