//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum
{
    MAX_SIZE = 100
};


int main(void)
{
    //
    // To compare two strings in C, you use the strcmp() function.
    // See the following example:
    //
    char strOne[MAX_SIZE];
    char strTwo[MAX_SIZE];

    printf("%s\n", "Enter the first string: ");
    fgets(strOne, sizeof(strOne), stdin);

    printf("%s\n", "Enter the second string: ");
    fgets(strOne, sizeof(strTwo), stdin);

    int result = strcmp(strOne, strTwo);

    if (result > 0)
    {
        printf("str1 > str2");
    }
    else if (result < 0)
    {
        printf("str1 < str2");
    }
    else
    {
        printf("str1 == str2");
    }
    return EXIT_SUCCESS;
} // end of function main
