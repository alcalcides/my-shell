#include "./dealWithInput.hpp"

#include <string.h>
#include <stdio.h>

char* readUserInput(char* input, int maxLengh) {
    return fgets(input, maxLengh, stdin);
}

void getMyshellOperation(char** word, char* input) {
    word[0] = strtok(input, " \t\n");
}

