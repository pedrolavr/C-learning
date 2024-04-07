#include <stdio.h>

int main(){
    // Variable =  Allocated space in memory to store a value
    /*             We refer to a variable's name to acess the stored value
                   That variable now behaves as if it was the value it contains
                   BUT we need to declare what type of data we are storing

                   Basic format :  
                                  declare_data_type  variable_name   =   value       
                                            
    */



   int x; //declaration
   x = 64; //initilization
   int y = 128; //declaration + initialization





   int age =19;               //integer type
   float fuelSize = 15.5;    //floating point number
   char grade = 'A';          //Single character
   char gender[] = "MAN";      //Array of characters

   // In C, doesn't exists the kind "string", so, we need to use a "array of chars" to express a word





   printf("We have a total of %f gallons of fuel\n", fuelSize); //As you can see, we just used a kinda index
   printf("You are %d years old\n", age);
   printf("Your gender is : %s\n", gender);
   printf("Your grade is : %c\n", grade);

   // "INDEX IDEAS"
   // %f is used to float
   // %d is used to integer
   // %s is used to string
   // %c is used to char
   // %e or %E are used to scientific notation
}