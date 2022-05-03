#include "./dealWithInput.hpp"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *readUserInput(char *input, int maxLengh)
{
    return fgets(input, maxLengh, stdin);
}

void getMyshellOperation(char **word, char *input)
{
    word[0] = strtok(input, " \t\n");
}

void getAllArgs(char** word, int* wordCounter, char* input, int const MAX_NUMBER_OF_WORDS)
{
    for ((*wordCounter)++; *wordCounter < MAX_NUMBER_OF_WORDS; (*wordCounter)++)
    {
        word[*wordCounter] = strtok(NULL, " \t\n");
        if (word[*wordCounter] == NULL)
            break;
    }

    if (strtok(NULL, " \t\n"))
    {
        printf("[ERROR] Forbidden to enter, more than %d arguments\n", MAX_NUMBER_OF_WORDS);
        exit(EXIT_FAILURE);
    }
}
