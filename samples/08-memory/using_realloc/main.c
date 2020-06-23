//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    //
    // The realloc() function allows you to change the
    // size of the memory block allocated by the malloc()
    // or calloc() function.
    //
    //    void* realloc (void* ptr, size_t size);
    //
    // The realloc() function the size of the memory block
    // pointed by the ptr pointer. See the following example:
    //
    int len1, len2;
    char *buffer;

    char *str1 = "0 1 2 3 ";
    len1 = strlen(str1);
    printf("%s(%d)\n", str1, len1);

    len1 += 1; /* for \0 */
    buffer = (char *)malloc(len1 * sizeof(char));
    if (buffer == NULL)
    {
        fprintf(stderr, "%s\n" ,"error occurred: out of memory");
        return EXIT_FAILURE;
    }
    strcpy(buffer, str1);
    printf("The buffer is: %s(%d)\n", buffer, strlen(buffer));

    char *str2 = "4 5 6 7 8 9";
    len2 = strlen(str2);
    printf("%s(%d)\n", str2, len2);

    buffer = (char *)realloc(buffer, (len1 + len2) * sizeof(char));
    if (buffer == NULL)
    {
        fprintf(stderr, "%s\n" ,"Out of memory for the buffer!");
        return EXIT_FAILURE;
    }
    strcat(buffer, str2);

    printf("The buffer is: %s(%d)\n", buffer, strlen(buffer));

    free(buffer);
    return EXIT_SUCCESS;
} // end of function main
