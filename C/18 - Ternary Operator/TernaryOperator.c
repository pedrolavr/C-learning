#include <stdio.h>


int findMaxBtw(int x, int y)
//The variable's order matters
//The function basically is going to show us what is the greater number
{

/*We can write like this:
   if(x > y)
   {
    return x;
   }
   else
   {
    return y;
   }
*/


//Or like this:
   return (x > y) ? x : y;

}


int main(){

    //Ternary Operator = Shortcut to if/else when assigning/returning a value
    //The shape:
    // (Condition) ? value that will appear if true : value that will appear  if false


    int max =  findMaxBtw(3,4);
    printf("%d", max);

    return 0; 
}