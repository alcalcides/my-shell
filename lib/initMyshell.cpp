#include "./initMyshell.hpp"
#include "./dealWithInput.hpp"

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

	// obtendo todos os demais argumentos
	for (wordCounter++; wordCounter < MAX_NUMBER_OF_WORDS; wordCounter++)
	{
		word[wordCounter] = strtok(NULL, " \t\n");
		if (word[wordCounter] == NULL)
			break;
	}

	if (strtok(NULL, " \t\n"))
	{
		printf("[ERROR] Forbidden to enter, more than %d arguments\n", MAX_NUMBER_OF_WORDS);
		exit(EXIT_FAILURE);
	}

	// feedback to user
	// ...

	// execution
	// ...
}
