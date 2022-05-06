#include "./initMyshell.hpp"
#include "./dealWithInput.hpp"
#include "./args.hpp"
#include "./execute.hpp"

#include <stdio.h>

#define MAX_STRING_LENGH 4096
#define MAX_NUMBER_OF_WORDS 100

void initMyshell()
{
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
}
