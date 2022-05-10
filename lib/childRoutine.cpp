#include "./childRoutine.hpp"
#include "./print.hpp"

#include <errno.h>

void playChild(char **word)
{
    if (strcmp("pingme", word[0]) == 0)
    {
        char path[50] = "";
        strcat(path, BIN_FEATURE);
        strcat(path, "pingme");

        execvp(path, word);
    }
    else if (strcmp("start", word[0]) == 0)
    {
        execvp(word[1], &word[1]);
        
        // only if execvp fails
        printSystemError();
        exit(EXIT_FAILURE);
    }
    else if (strcmp("quit", word[0]) == 0 || strcmp("exit", word[0]) == 0)
    {
        exit(EXIT_SUCCESS);
    }
    else
    {
        printError("Unknown operation");
        exit(EXIT_SUCCESS);
    }
}