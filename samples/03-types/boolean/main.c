//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

//
// The C99 standard for C language supports bool variables.
//
// Unlike C++, where no header file is needed to use bool,
// a header file “stdbool.h” must be included to use bool in
// C. If we save the below program as .c, it will not compile,
// but if we save it as .cpp or .cc, it will work fine.
//
typedef enum
{
    False,
    True
} boolean;

int main(void)
{
    boolean answer = True;
    printf("%s %s", "The Answer Is", (answer == True) ? "Yes" : "No");

    //
    // Standard logical operators &&, ||, ! can be used
    // with the Boolean type in any combination. A program
    // may undefine and perhaps then redefine the macros
    // bool, true and false.
    //
    boolean firstAnswer = True, secondAnswer = False;

    printf("%d\n", firstAnswer && secondAnswer);
    printf("%d\n", firstAnswer || secondAnswer);
    printf("%d\n", !secondAnswer);

    return EXIT_SUCCESS;
} // end of function main
