#include "./initMyshell.hpp"
#include "./dealWithInput.hpp"
#include "./args.hpp"
#include "./execute.hpp"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING_LENGH 4096
#define MAX_NUMBER_OF_WORDS 100

void initMyshell()
{

init:
	char input[MAX_STRING_LENGH];
	char *word[MAX_NUMBER_OF_WORDS];
	int wordCounter = 0;

	do
	{
		readUserInput(input, MAX_STRING_LENGH);
		getMyshellOperation(word, input);
	} while (word[wordCounter] == NULL);

	getAllArgs(word, &wordCounter, input, MAX_NUMBER_OF_WORDS);

	// debug
	// seeArgs(word, wordCounter);

	execute(word);
	
	if (strcmp("quit", word[0]) != 0 && strcmp("exit", word[0]) != 0)
		goto init;

	exit(EXIT_SUCCESS);
}
