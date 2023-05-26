#include "shell.h"

/**
 * prompt - checks mode and prints prompt if in interactive mode
 * @fd: file stream
 * @buf: buffer
**/
void prompt(int fd, struct stat buf)
{
	if (isatty(fd))
		_puts(PROMPT);
}

/**
 * _puts - prints a string without a \n
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
while (*str)
{
write(1, str, 1);
str++;
}
}
