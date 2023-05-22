#include "shell.h"

/**
 * shell_exit - exits the shell
 * Return: void
 **/
int shell_exit(void)
{
	return (-1);
}

/**
 * shell_env - prints environment
 * Return: void
 **/
int shell_env(void)
{
	unsigned int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
