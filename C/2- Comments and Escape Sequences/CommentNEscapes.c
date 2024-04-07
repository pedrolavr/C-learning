#include <stdio.h>

int main()
{
    
    //This is a comment bla bla bla
    
    /*
       This is a 
       Block comment    
    */


    //Escape Sequence = Character combination consisting of a backslash
    /*  followed by a letter or combination or digits.
        Theys specify actions within a line or string of text.



        \n = newline (should be put before and after the text will be "newlined")
        \a = Print a kind of "beep" (idk)
        \?question\? - Double ? (used to avoid trigraphs)
        \t = tab (should be put before and after the text will be "tabulated")
        \"double\" - Use this format to use double quotes
        \'simple\' - Use this format to use simple quotes
        \\back\\ - Use this format to print (literally) backslashes

    
    */
    printf("This\n is\n a\n program!\n");
    printf("1\t2\t3\t");
    printf("\n\"I love pizza\"\n\t- Abraham Lincoln (probably)\t\n");
    printf("\?Is it a question\?");
    return 0;
} 