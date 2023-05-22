#include "shell.h"

/**
 * _getline - insert input from user into buffer line
 * @fp: buffer for input of user
 * Return: user input
 */
char *_getline(FILE *fp)
{
char *line = NULL;
size_t len = 0;
ssize_t read = getline(&line, &len, fp);

if (read == -1)
{
free(line);
exit(EXIT_SUCCESS);
}
return (line);
}
