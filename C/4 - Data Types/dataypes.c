#include <stdio.h>
#include <stdbool.h>

int main(){
   
   /*------------------- MOST USEDS DATA TYPES -----------------------*/
    char a = 'A';                                    //  %c
    char word[] = "big word";                        //  %s
    int j = 2147483647;                              //  4 bytes (-2,147,483,647 to +2,147,483,647) --------------- %d
    float c = 3.141592;                              //  4 bytes (32 bits of precision) 6-7 digits ---------------- %f
    bool trueOrFalse = true;                         //  1 byte (true or false) ----------------------------------- %d
    //To use bool, we should include the <stdbool.h>
    


    double d = 3.141592653589793;                    //  8 bytes (64 bites of precision) 15-16 digits ------------- %lf
    char f = 100;                                    //  1 byte (-128 to +127) ------------------------------------ %d or %c
    unsigned char g = 255;                           //  1 byte (0 to +255) --------------------------------------- %d or %c
    short int h = 32767;                             //  2 bytes (-32,768 to +32,767) ----------------------------- $d
    unsigned short int i = 655355;                   //  2 bytes (0 to +65,535) ----------------------------------- %d
    unsigned int k = 4294967295;                     //  4 bytes (0 to +4,294,967,295) ---------------------------- %u
    long long int l = 9223372036854775807;            //  8 bytes (-9 quintillion to +9 quintillion) --------------- %lld
    unsigned long long int m = 18446744073709551615;   //  8 bytes (0 to +18 quintillion) --------------------------- %llu

    printf("For example %d ", i);
    return 0;
}