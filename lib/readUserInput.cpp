#include "./readUserInput.hpp"

#include <stdio.h>

char* readUserInput(char* input, int maxLengh) {
    return fgets(input, maxLengh, stdin);
}