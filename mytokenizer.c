#include "shell.h"

/**
 * tokenizer - tokenizes string
 * @str: user input
 * Return: pointer to array of tokens
 */
char **tokenizer(char *str)
{
char **tokens = malloc(sizeof(char *) * BUFFER), *token;
unsigned int i = 0;

if (tokens == NULL)
{
errors(3);
exit(EXIT_FAILURE);
}
token = strtok(str, "\n\t\r ");
while (token != NULL)
{
tokens[i++] = token;
token = strtok(NULL, "\n\t\r ");
}
tokens[i] = NULL;
return (tokens);
}
