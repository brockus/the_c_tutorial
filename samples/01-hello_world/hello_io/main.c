//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// here we define an enum that holds the max
// size of our input values.
enum { MAX_SIZE = 100};


//
// here we need to process our given input by
// removing the possible trailing new line char.
void stripNewLine(char* string)
{
    size_t length = strlen(string);
    if((length > 0) && (*(string + length - 1) == '\n'))
    {
        *(string + length - 1) = '\0';
    }
}

//
// show you how you can work with user input in 'c'.
int main(void)
{
    //
    // here we allocate memory for our input
    char *str = malloc(sizeof(*str) * MAX_SIZE);

    if (str == NULL)
    {
        fprintf(stderr, "%s", "not enough memory to allocate string!");
        return EXIT_FAILURE;
    }
    
    //
    // The fgets function includes the newline.
    //
    // So we process the string with the handy
    // strip new line utility function.  
    printf("%s", "enter your name: ");

    fgets(str, MAX_SIZE, stdin);
    stripNewLine(str);
  	
    printf("%s, %s", "Hello", str);

    //
    // Release the allocated memory back to the system
    free(str);

    return EXIT_SUCCESS;
}// end of function main/* end of function main */
