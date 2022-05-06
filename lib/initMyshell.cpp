#include "./initMyshell.hpp"
#include "./dealWithInput.hpp"
#include "./args.hpp"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LENGH 4096
#define MAX_NUMBER_OF_WORDS 100

void initMyshell()
{
	char input[MAX_STRING_LENGH];
	char *word[MAX_NUMBER_OF_WORDS];
	int wordCounter = 0;

	do
	{
		printf("myshell> ");
		readUserInput(input, MAX_STRING_LENGH);
		getMyshellOperation(word, input);
	} while (word[wordCounter] == NULL);

	getAllArgs(word, &wordCounter, input, MAX_NUMBER_OF_WORDS);

	// feedback to user
	// ...
	seeArgs(word, wordCounter);

	// execution
	// ...
}
