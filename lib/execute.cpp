#include "./execute.hpp"
#include "./print.hpp"
#include "./childRoutine.hpp"
#include "./parentRoutine.hpp"

#include <string.h>
#include <stdlib.h>

void execute(char **word)
{
    pid_t pid = fork();
    if (pid < 0)
    {
        printError("New process creation failure");
        exit(EXIT_FAILURE);
    }
    else if (pid > 0)
    {
        playParent(pid);
    }
    else
    {
        playChild(word);
    }
}

bool shouldRepeat(char *cmd)
{
    return strcmp("quit", cmd) != 0 && strcmp("exit", cmd) != 0;
}
