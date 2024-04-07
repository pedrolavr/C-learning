#include <stdio.h>

int main(){
    // While LOOP = Checks a condition, THEN executes a block of code (only) if condition is true
    // Do While LOOP = Always executes a block of code (at least) once, THEN checks a condition
    // The shape :
    //              do {what will be executed} while(condition);

    int num = 0;
    int sum = 0;

    
    do{
        printf("\nEnter a number above 0 : ");
        scanf("%d", &num);
        if(num > 0)
        {
            sum += num;
        //  sum = sum + num;
        }
    } while(num > 0);
    //The program is gonna keep adding while the inserted number was greater than 0

    printf("Sum : %d", sum);

    return 0;
}