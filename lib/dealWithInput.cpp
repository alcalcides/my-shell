#include "./dealWithInput.hpp"
#include "./print.hpp"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void dealWithEOF()
{
    if (feof(stdin))
    {
        printf("\n");
        exit(EXIT_SUCCESS);
    }
}

char *readUserInput(char *input, int maxLengh)
{
    printMyshell();
    fgets(input, maxLengh, stdin);
    input[strlen(input) - 1] = '\0';
    dealWithEOF();
    return input;
}

void getMyshellOperation(char **word, char *input)
{
    word[0] = strtok(input, " \t\n");
}

void getAllArgs(char **word, int *wordCounter, char *input, int const MAX_NUMBER_OF_WORDS)
{
    for ((*wordCounter)++; *wordCounter < MAX_NUMBER_OF_WORDS; (*wordCounter)++)
    {
        word[*wordCounter] = strtok(NULL, " \t\n");
        if (word[*wordCounter] == NULL)
            break;
    }

    if (strtok(NULL, " \t\n"))
    {
        printErrorOverArgs(MAX_NUMBER_OF_WORDS);
        exit(EXIT_FAILURE);
    }
}
