#include "./execute.hpp"
#include "./print.hpp"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

#define BIN_FEATURE "./usr/bin/"

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

void playParent(pid_t child_pid)
{
    printProcessStarted(child_pid);
    int status;
    pid_t wpid;

    wpid = waitpid(child_pid, &status, WUNTRACED | WCONTINUED);
    if (wpid == -1)
    {
        printError("waitpid failure");
        exit(EXIT_FAILURE);
    }

    if (WIFEXITED(status)) // SIGTERM(15)
    {
        printProcessExited(child_pid);
    }
    else if (WIFSIGNALED(status)) // SIGKILL(9)
    {
        printProcessKilled(child_pid);
    }
    else if (WIFSTOPPED(status)) // SIGTSTP(20)
    {
        printProcessStopped(child_pid);
    }
    else if (WIFCONTINUED(status)) // SIGCONT(18)
    {
        printProcessContinued(child_pid);
    }
}

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