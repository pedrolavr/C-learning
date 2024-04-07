#include <stdio.h>

int main()
{
    // Nested LOOP = A loop inside of another loop
    
    int rows;
    int columns;
    char symbol;

    printf("\nEnter a number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter a number of columns: \n");
    scanf("%d", &columns);
    scanf("%c");

    printf("Enter a symbol : ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    //i = 1 is the minimum size
    {
       for(int j = 1; j<= columns; j++)
       {
          printf("%c ", symbol);
       }
       printf("\n");
    }

    return  0;

}