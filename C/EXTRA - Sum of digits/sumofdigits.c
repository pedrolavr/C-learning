#include <stdio.h>

int numbers[5];
int arrayLength = sizeof(numbers)/sizeof(numbers[0]);
int n;
    

int digit(int n)
{
    return n % 10;
}

int main() {
    
    
    scanf("%d", &n);
    
    for(int i = 0; i < arrayLength; i++)
    {
        int extract = digit(n);
        numbers[i] = extract;
        n/=10;
    }
    
    int sumOfArray = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    
    printf("%d", sumOfArray);
    
    
    return 0;
}
