#include "./initMyshell.hpp"

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

		// lendo a entrada do usuário
		fgets(input, MAX_STRING_LENGH + 1, stdin);

		// obtendo o comando inicial, a ser processado pelo shell
		word[wordCounter] = strtok(input, " \t\n");

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
