//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // The if statement allows you to control the execution
    // of code based on a particular condition. The syntax
    // of the if statement is as follows:
    //
    // if (expression)
    // {
    //    /* unit of code to be executed */
    // }// end of if branch
    //
    // The body of the if statement only executes if the
    // expression evaluates to a non-zero value or true.
    // If the expression evaluates to false, the statements
    // inside the body of the if statement will be ignored.
    //
    // The program asked users to enter a number. If the number
    // is greater than zero, it displays a message showing that
    // otherwise, it does nothing.
    //
    int x;
    printf("%s", "Please enter a number: ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("\n%s %d %s 0", "The number", x, "is greater than");
    }
    return EXIT_SUCCESS;
} // end of function main
