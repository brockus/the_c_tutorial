//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //
    // Sometimes you want to execute a piece of code in
    // case of the expression in the if statement evaluates
    // to false. You can use the second form of the if statement
    // which is known as if else statement. The following
    // illustrates the syntax of the if else statement:
    //
    // if (expression)
    // {
    //     /* code block of if statement */
    // }
    // else
    // {
    //     /* code block of else statement */
    // }
    //
    // The following example demonstrates how to use the if else
    // statement:
    //
    int x;
    printf("%s", "Please enter a number: ");
    scanf("%d", &x);
    if (x > 0)
    {
        printf("\nThe number %d is greater than 0", x);
    }
    else
    {
        printf("\nThe number %d is less than or equal zero", x);
    }
    return EXIT_SUCCESS;
} // end of function main
