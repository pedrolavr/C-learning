#include <stdio.h>

// I just made up - acabei de inventar

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0};
    printf("\n%.2lf", prices[0]);
    printf("\n%.2lf", prices[1]);
    printf("\n%.2lf", prices[2]);
    printf("\n%.2lf", prices[3]);
    printf("\n%.2lf", prices[4]);

//  Whether we want to show each index, we should repeat this line N times (where N is the index number)
//  If we have a hundred elements, it will be IMPRATICABLE
//  So, we can use a loop (anyone) 

    int quantity[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    
    for(int i = 0; i < sizeof(quantity)/sizeof(quantity[0]) ; i++)
    // In place of using a number to limit the i, we can use the array size as limiter
    //
    //
    //
    //To do that, we need to divide the               sizeof(quantity)         /           sizeof(quantity[0])
    //                                           (give us the total bytes )         (give us how much "cost" each index)
    //
    //
    // With that trick, we don't need to update the code every time the array changes


    {
        printf("\n%.2d units", quantity[i]);
        //Now, the int i will be act as a index
    }
    

}