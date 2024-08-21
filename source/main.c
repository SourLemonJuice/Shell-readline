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
        fprintf(stderr, "Note: This program doesn't have any flags(for now)\n");
        fprintf(stderr, "Usage: simple-readline\n\n");
        fprintf(stderr, "The final user input will be printed to stdout, the readline interface will displayed on stderr.\n");
        fprintf(stderr, "In bash, use \"simple-readline | cat -\" to provide stdin to another command.\n");
        fprintf(stderr, "Also can use \"input=$(simple-readline)\" to write input to a variable.\n");
        fprintf(stderr, "Bash's Command Substitution and Pipe only use stdout stream, remember this when writing script.\n\n");
        fprintf(stderr, "If any arguments are entered, this help message will be displayed.\n");
        exit(EXIT_FAILURE);
    }

    rl_outstream = stderr;
    char *input = readline("");

    if (input != NULL) {
        fprintf(stdout, "%s\n", input);
        free(input);
    } else {
        fprintf(stdout, "[simple-readline: Unknown error, input string is NULL]\n");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
