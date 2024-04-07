#include <stdio.h>
#include <string.h>

char *numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int arrayLength = sizeof(numbers)/sizeof(numbers[0]);

int main()
{
    int a = 0;
    int b = 0;
    char nA[10];
    char nB[10];
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    
    //Verifies if A is greater than or short than the array size
    if(a > arrayLength)
    {
       strcpy(nA, numbers[8]);
    }
    else if(a < arrayLength)
    {
        strcpy(nA, numbers[0]);
    }
    
    
    
    //Verifies if B is greater than or short than the array size
    if(b > arrayLength)
    {
        strcpy(nB, numbers[8]);
    }
    else if(b < arrayLength)
    {
        strcpy(nB, numbers[0]);
    }
    
    
    
    //Will check A
    for(int i = 0; i <= arrayLength; i++)
    {
        if(a == i)
        {
            strcpy(nA, numbers[i-1]);
            break;
        }
    }
    
    
    
    //Will check B
    for(int j = 0; j <= arrayLength; j++)
    {
        if(b == j)
        {
            strcpy(nA, numbers[j-1]);
            break;
        }
    }
    
    
    printf("%s\n", nA);
    printf("%s\n", nB);
    
    
    //Checks if A is even or odd
    if(a % 2 != 0)
    {
        printf("odd\n");
    }
    else 
    {
       printf("even\n");
    }
    
    
    //Checks if B is even or odd
    if(b % 2 != 0)
    {
        printf("odd\n");
    }
    else 
    {
       printf("even\n");
    }
    
    
}





