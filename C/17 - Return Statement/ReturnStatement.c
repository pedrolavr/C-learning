#include <stdio.h>

int add(int a, int b)
{
    //Basically, we can define a shape for our function
    //We specifie what a kind of argument will be accepted
    //Creating a int add, we're defining what is a "add" as well as other kinds of equations

    return a + b;


}

int main()
{

    int result = add(2, 6);
    //Here we're simply doing a variable declaration
    //The result must be 8

    printf("%d", result);
    
    //return = returns a value back to a calling function
    //The "INT" main is int 'cause the return is a int number 
    return 0;
    
}