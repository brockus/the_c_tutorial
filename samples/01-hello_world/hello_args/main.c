//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// Version number of this program.
//
const char *VERSION = "0.1.1";

const unsigned char MAX_COMMAND_ARGS = 1;
const unsigned char MAX_SWITCH_ARGS = 1;
const unsigned char MAX_SUB_COMMAND_ARGS = 2;
const unsigned char MAX_SUB_SWITCH_ARGS = 2;

//
// Will print the list commands the user can use with
// this program
void showUsage(void)
{
    puts("Usage: prog <command name>\n");
    puts("say-hello : Tells the program to say hello world.");
    puts("--version : Prints the version of the program.");
    puts("--help    : Prints this menu of commands.");
}

//
// Will print the list commands the user can use with
// this say hello command.
void showSubUsage(void)
{
    puts("Usage: prog say-hello --<switch name>\n");
    puts("--classic : Prints Hello, World for the user.");
    puts("--to      : Name of the person being sent to.");
    puts("--help    : Prints this menu of commands.");
}

//
// this is the hello args app. here to show how
// you can build a command line app using 'c'.
int main(int argc, char **argv)
{
    //
    // first we check passed args to see if there valid.
    if (argc == MAX_COMMAND_ARGS)
    {
        showUsage();
        return EXIT_SUCCESS;
    }

    //
    // check to see if any of the args passed is valid
    // and if so run one of the if branchs.
    //
    if (!strncmp(*(argv + MAX_COMMAND_ARGS), "say-hello", 10))
    {
        printf(": %s\n", argv[1]);
        if (*(argv + MAX_SUB_COMMAND_ARGS) == NULL)
        {
            showSubUsage();
            return EXIT_SUCCESS;
        }
        else if (!strncmp(*(argv + MAX_SUB_SWITCH_ARGS), "--to", 5))
        {
            printf("Hello, %s!\n", *(argv + 3));
        }
        else if (!strncmp(*(argv + MAX_SUB_SWITCH_ARGS), "--classic", 10))
        {
            puts("Hello, World!");
        }
    }
    else if (!strncmp(*(argv + MAX_SWITCH_ARGS), "--version", 10))
    {
        puts(VERSION);
    }
    else if (!strncmp(*(argv + MAX_SWITCH_ARGS), "--help", 7))
    {
        showUsage();
    }

    // Signal to operating system everything works fine
    return EXIT_SUCCESS;
} // end of function main
