#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>


int numFrequency[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
char insertedCode[999];
char digits[100];
int digit_count = 0;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
    scanf("%s", insertedCode);
    
    
    for(int i = 0; insertedCode[i] != '\0'; i++)
    {
        if(isdigit(insertedCode[i]))
        {
            digits[digit_count++] = insertedCode[i];
        }
    }

   for(int j = 0; j < digit_count; j++)
   {
      printf("%c ", digits[j]);
   }

    return 0;
    
}
