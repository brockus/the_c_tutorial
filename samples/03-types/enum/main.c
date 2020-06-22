//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //
    // C provides developers with special a types called enumerated
    // types or enum to declare symbolic names that represent integer
    // constants. Its main purpose is to enhance the readability of
    // the code. An enumeration consists of a group of symbolic
    // integers.
    //
    // If you declare a variable with enumeration type, the
    // value must be one of the values of the enumeration
    // members. For example, you can declare a variable called
    // favoriteColor as a variable of the color type.
    //
    enum color
    {
        RED,
        GREEN,
        YELLOW,
        BLUE
    };
    enum color favoriteColor;

    //
    // ask user to choose color
    //
    printf("%s", "Please choose your favorite color: (1. red, 2. green, 3. blue): ");
    scanf("%d", &favoriteColor);

    //
    // print out the result
    //
    switch (favoriteColor)
    {
    case RED:
        printf("your favorite color is Red");
        break;
    case GREEN:
        printf("your favorite color is Green");
        break;
    case YELLOW:
        printf("your favorite color is Yellow");
        break;
    case BLUE:
        printf("your favorite color is Blue");
        break;
    default:
        printf("you did not choose any color");
    }
    return EXIT_SUCCESS;
} // end of function main
