//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

const char *FILE_NAME = "test.txt";
const unsigned char MAX_CHAR = 1000;

int main(void)
{
    //
    // In order to read from a text file, you follow the steps below:
    //
    // (1) First, open the text file using the fopen() function.
    //
    // (2) Second, use the function fgets() to read text from the
    //     stream and store it as a string. The newline or EOF
    //     character makes the fgets() function stop reading so
    //     you can check the newline or EOF file character to read
    //     the whole line.
    //
    // (3) Third, close the text file using the fclose() function.
    //
    // Below is the source code of reading a text file line by line and
    // output it to the screen.
    FILE *fPtr;
    char str[MAX_CHAR];

    fPtr = fopen(FILE_NAME, "r");
    if (fPtr == NULL)
    {
        printf("Could not open file %s", FILE_NAME);
        return EXIT_FAILURE;
    }

    while (fgets(str, MAX_CHAR, fPtr) != NULL)
    {
        printf("%s", str);
    }

    if (fclose(fPtr) == EOF)
    {
        /* Handle error */
        puts("Was not is closed before returning to the caller!");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
} // end of function main
