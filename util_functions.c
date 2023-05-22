#include "shell.h"
/**
 * _strcmp - compares 2 strings to find if they are the same
 * @name: name inputted by user to look for
 * @variables: variable to compare against
 * @length: name length
 * Return: -1 if strings !=, 0 if they are =
 */
int _strcmp(char *name, char *variables, unsigned int length)
{
	unsigned int var_length;
	unsigned int i;

	var_length = _strlen(variables);
	if (var_length != length)
		return (-1);
	i = 0;
	while (name[i] != '\0' && variables[i] != '\0')
	{
		if (name[i] != variables[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * _strncmp - compares two strings
 * @name: name supplied by user to search for
 * @variable: variable to compare against
 * @length: length to compare up to
 * Return: 1 if strings are =, -1 if they !=
 */
int _strncmp(char *name, char *variable, unsigned int length)
{
	unsigned int i = 0;

	while (i < length && name[i] == variable[i])
		i++;

	return (i == length ? 1 : -1);
}

/**
 * *_strcpy - copies pointed string from src to buffer pointing to dest
 * @dest: destination of string
 * @src: source of string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}

/**
 * _strlen - returns the string length
 * @s: string to be reviewed
 * Return: string length
 */
size_t _strlen(const char *s)
{
const char *p = s;

while (*p)
++p;
return (p - s);
}
