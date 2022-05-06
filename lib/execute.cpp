#include "./execute.hpp"

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
        printf("[ERROR] New process creation failure\n");
        exit(EXIT_FAILURE);
    }
    else if (pid > 0)
    {
        wait(0);
    }
    else
    {
        char path[50] = "";
        if (strcmp("pingme", word[0]) == 0)
        {
            strcpy(path, "");
            strcat(path, BIN_FEATURE);
            strcat(path, "pingme");

            printf("%d\t%d\t%s\n", execvp(path, word), errno, strerror(errno));
        }
        else if (strcmp("quit", word[0]) == 0 || strcmp("exit", word[0]) == 0)
        {
            exit(EXIT_SUCCESS);
        }
        else
        {
            printf("Unknown operation\n");
        }
    }

    exit(EXIT_SUCCESS);
}