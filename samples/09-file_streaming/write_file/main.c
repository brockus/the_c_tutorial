//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>

const char *FILE_NAME = "test.txt";
const unsigned char ITER_LEN = 10;

int main(void)
{
    //
    // The following illustrates the steps of writing text
    // into a text file line by line:
    //
    // (1) First, open the file for writing using fopen() function with
    //     mode ‘w’. It is important to note that in this mode the file
    //     content is deleted and the file is overwritten if the file
    //     already exists.
    //
    // (2) Second, use function fprintf() to write text to the file stream.
    //
    // (3) Third, use function fclose() to close the file
    //
    // The following program writes 10 lines of text into a text file named
    // test.txt in the root directory.
    //
    FILE *fPtr;

    /* open the file for writing*/
    fPtr = fopen(FILE_NAME, "w");
    if (fPtr == NULL)
    {
        printf("Could not open file %s", FILE_NAME);
        return EXIT_FAILURE;
    }

    /* write 10 lines of text into the file stream*/
    for (int index = 0; index < ITER_LEN; ++index)
    {
        fprintf(fPtr, "This is line %d\n", index + 1);
    }

    /* close the file*/
    if (fclose(fPtr) == EOF)
    {
        /* Handle error */
        puts("Was not closed before returning to the caller!");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
} // end of function main
