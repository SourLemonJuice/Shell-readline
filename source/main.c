#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <readline/readline.h>

/*
    Yep...
    Just a readline() there
 */
int main(int argc, char *argv[])
{
    if (argc >= 2) {
        fprintf(stdout, "Note: This program doesn't have any flags(for now)\n");
        fprintf(stdout, "Usage: simple-readline\n\n");
        fprintf(stdout, "The final user input will be printed to stderr, the readline interface will displayed on stdout.\n");
        fprintf(stdout, "In bash, use \"simple-readline 2> >(cat -)\" to provide stdin to another command.\n");
        fprintf(stdout, "Also can use \"input=$(./simple-readline 1> $(tty))\" to write input to a variable.\n\n");
        fprintf(stdout, "If any arguments are entered, this help message will be displayed.\n");
        exit(EXIT_FAILURE);
    }

    char *input = readline("");

    if (input != NULL) {
        fprintf(stderr, "%s", input);
        free(input);
    } else {
        fprintf(stderr, "[simple-readline: Unknown error, input string is NULL]");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
