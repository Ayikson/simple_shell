#include <shell.h>
#include <stdlib.h>
#include <string.h>
/**
 * tokenizer - A string returns a double pointer to a list of tokens
 * @str: user input
 * Return: -1
 */

#define BUFFER_SIZE 100

char **tokenizer(const char *str)
{
	char **tokens = NULL;
	char *token;
	unsigned int i = 0;
	const char *delimiters = "\n\t\r ";
	const char *copy = strdup(str); /* Create a copy of the input string */

	tokens = malloc(sizeof(char *) * BUFFER_SIZE);
	if (tokens == NULL)
	{

		/* Handle memory allocation failure */
		exit(EXIT_FAILURE);
	}
	token = strtok(copy, delimiters);
	while (token != NULL && i < BUFFER_SIZE - 1)
	{
		tokens[i] = strdup(token);
		i++;
		token = strtok(NULL, delimiters);
	}

	tokens[i] = NULL;
	free((void *)copy);
	return (tokens);
}

