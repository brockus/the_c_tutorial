//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    //
    // The C switch case statement is a control flow
    // statement that tests whether a variable or
    // expression matches one of a number of constant
    // integer values, and branches accordingly.
    //
    // The switch case statement is used to control very
    // complex conditional and branching operations. For
    // controlling simple conditional and branching
    // operations, you can use if else statement.
    //
    // The following illustrates the C switch case
    // statement syntax:
    //
    // switch (expression)
    // {
    //  case value1: /* execute unit of code 1 */
    //      break;
    //  case value2: /* execute unit of code 2 */
    //      break;
    //      ...
    //  default: /* execute default action */
    //      break;
    // }
    //
    // The following example demonstrates C switch case
    // statement
    //
    int color = 1;
    printf("Please choose a color(1: red,2: green,3: blue):\n");
    scanf("%d", &color);

    switch (color)
    {
    case 1:
        printf("you chose red color\n");
        break;
    case 2:
        printf("you chose green color\n");
        break;
    case 3:
        printf("you chose blue color\n");
        break;
    default:
        printf("you did not choose any color\n");
    }
    return EXIT_SUCCESS;
} // end of function main
