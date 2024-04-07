#include <stdio.h>
#include <string.h>

char *numbers[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
                  //  0   ,  1  ,    2    ,   3   ,   4   ,   5  ,    6   ,   7    ,   8

int arrayLength = sizeof(numbers)/sizeof(numbers[0]);

int main()
{
    int a = 0;
    int b = 0;
    char nA[10] = "";
    char nB[10] = "";
    
    scanf("%d",&a);
    scanf("%d",&b);


    if(a > 9){
        printf("%s", numbers[9]);
    }
    else if(a < 1)
    {
        printf("%s", numbers[0]);
    }
    else
    {
        for(int i = 0; i <= 8; i++)
        {
           if(a == i)
           {
            strcpy(nA, numbers[i-1]);
            break;
           }
        }
    }
    


    if(b > 9){
        printf("%s", numbers[9]);
    }
    else if(b < 1)
    {
        printf("%s", numbers[0]);
    }
    else
    {
        for(int j = 0; j <= 8; j++)
        {
            if(b == j)
            {
            strcpy(nB, numbers[j-1]);
            break;
            }
        }
    }





    printf("%s\n", nA);
    printf("%s\n", nB);

    //EVEN OR ODD
    if(a % 2 == 0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }

    if(b % 2 == 0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
    
    
}





