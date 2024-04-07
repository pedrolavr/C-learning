#include <stdio.h>

int main() 
{
    //Array = a data structure that can store many values of the same data type

    double prices[] ={5.0, 10.0, 15.0, 20.0, 25.0};



    //We can also set the array size, and only after, assign a number for each index
    int quantity[5];
    quantity[0] = 100;
    quantity[1] = 200;

    

    printf("$%.2lf", prices[3]);
    //As you can see, we just need to choose what index we want

    printf("\n%d units", quantity[0]);

    char name[] = "Blablabla";
}