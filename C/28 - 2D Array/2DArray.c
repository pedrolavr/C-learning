#include <stdio.h>

int main()
{
    //2D Array = An arra, where each element is an entire away
     //           Useful if you need a matrix, grid, or table
    


    /*

    int numbers[2][3] = {{1,2,3} , {4,5,6}};
    //This is a 2D array

    //As you can see, we need to specifie a maximum size


    */
 
    int numbers[3][3];
    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    printf("Rows : %d\n", rows);
    printf("Columns : %d\n", columns);
    if (rows == columns)
    {
       printf("This is a square matrix\n");
    }

    // numbers[row][column]
    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;



    //To show them, let's use nested loops
    for(int i = 0; i < rows; i++)

    {
        for(int j = 0; j < columns; j++)

        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}