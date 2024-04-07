#include <stdio.h>
//To use string functions, we should import the string library
#include <string.h>


int main()
{
   char string1[] = "Robert";
   char string2[] = "Downey Jr.";

   

   // strlwr(string1); //---------------------------------------  Converts a string to LOWERCASE

   // strupr(string1); // --------------------------------------  Converts a string to UPPERCASE

   // strcat(string1, string2); // -----------------------------  Appends string2 to end of string1

   // strncat(string1, string2, N); // -------------------------  Appends N characters from string2 to string 1

   // strcpy(string1, string2); // -----------------------------  Copy string2 to string1

   // strncpy(string1, string2, N); //  ------------------------  Copy N first characters of string2 to string1 


   printf("%s", string1);

   return 0;
}