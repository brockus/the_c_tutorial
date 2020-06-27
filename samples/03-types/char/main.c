//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


//
// In order to declare a variable with character type, you
// use the char keyword followed by the variable name. The
// following example declares three char variables.
//
// > char ch;
// > char key, flag;
//
// You can initialize a character variable with a character
// literal. A character literal contains one character that
// is surrounded with a single quotation ( '). The following
// example declares  key character variable and initializes
// it with a character literal 'A:
//
// > char key = 'A';
//
// Because the char type is the integer type, you can initialize
// or assign a char variable an integer. However, it is not
// recommended since the code may not be portable.
//
// > ch = 66;
//
int main(void)
{
    //
    // To print characters in C, you use the  printf() function
    // with %c as a placeholder. If you use %d, you will get an
    // integer instead of a character. The following example
    // demonstrates how to print characters in C.
    //
    char ch = 'A';
    printf("%s%c\n", "char letar  => ", ch);
    printf("%s%d\n", "char number => ", ch);

    return EXIT_SUCCESS;
} // end of function main
