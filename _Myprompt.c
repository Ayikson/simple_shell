#include <shell.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

/**
 * prompt - takes a file discriptor and prints a message
 * @buf: buffer
 * @fd: file descriptor
 */
void prompt(int fd)
{
	struct stat buf;
	int result = fstat(fd, &buf);

	if (result == 0 && S_ISCHR(buf.st_mode))
	{
		_puts("PROMPT");
	}
}

/**
 * _Puts - prints the calculated length of input strings
 * @str: string to print
 * Return: void
 */

unsigned int _strlen(const char *str)
{
	unsigned int length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

void _puts(const char *str)
{
	unsigned int length = _strlen(str);
	write(STDOUT_FILENO, str, length);
}

