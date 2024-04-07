#include <stdio.h>

int main()
{
// Continue = Skips rest of code & forces the next iteration of the loop
// Break = Exits a loop/switch


for(int i =1; i <= 20; i++)
{
    if(i == 10)
    {
        break;
        //It's gonna stop BEFORE i = 13
    }
    printf("%d\n", i);
}


for(int j = 10; j <= 200; j+=10)
{
    if (j == 30)
    {
        continue;
        //It's gonna skip the 30
    }
    printf("%d\n", j);
}

}