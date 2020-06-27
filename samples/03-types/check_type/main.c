//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum
{
    MAX_SIZE = 50
};
typedef char *cstring;

//
// This demonstrates a simple type check program where the user enters
// data and the code will let you know what type you entered in.
//
int main(void)
{
    cstring type = (cstring)calloc(MAX_SIZE, sizeof(*type));
    if (!type)
    {
        fprintf(stderr, "%s\n", "memory alloc err: 'type' string is null");
        return EXIT_FAILURE;
    } // end of if statment

    cstring str = (cstring)calloc(MAX_SIZE, sizeof(*str));
    if (!str)
    {
        fprintf(stderr, "%s\n", "memory alloc err: 'str' string is null");
        if (type)
        {
            free((void *)type);
        } // end of if statment

        return EXIT_FAILURE;
    } // end of if statment

    double temp = 0.0;        // To store numeric value of input is of type (float or integer)
    double precision = 1e-12; // Precision for integer checking

    printf("%s", "Enter some data: ");
    fgets(type, MAX_SIZE, stdin);

    /*
     * Here we check the users input and print the results
     * of the data.
     */
    if (sscanf(type, "%lf", &temp))
    {
        int32_t num = (int32_t)temp;

        if (fabs(temp - num) / temp > precision)
        {
            puts("The input is a floating point.");
        }
        else
        {
            puts("The input is an integer.");
        } // end of if else statment
    }
    else if (sscanf(type, "%s", str))
    {
        puts("The input is a string.");
    }
    else
    {
        puts("input not recognized.");
    } // end of long if else statment

    free((void *)type);
    free((void *)str);

    return EXIT_SUCCESS;
} // end of function main
