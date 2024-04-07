#include <stdio.h>
//To use properly the fgets(), we need to import a new library
#include <string.h>

int main(){

    char name[25]; //bytes
    int age;

    printf("What's your name?");
    //scanf("%s", &name);
    //But as you can see, scanf() doesn't read white space, so we need to use the 

    //                  fgets(name_of_variable, input_size, stdin);

    fgets(name, 25, stdin);
    //When you hit enter, the fgets will newline
    name[strlen(name)-1] = '\0';



    printf("\nHow old are you?");
    scanf("%d", &age);
    //We are assigning the "read of the line" to the int age, and we must to specifie the type with %d

    printf("\nSo, your name is %s,\nand you are %d ?", name, age);
    return 0;
}
