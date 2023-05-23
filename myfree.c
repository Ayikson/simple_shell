#include "shell.h"

/**
 * free_all - frees all malloced space at end of head loop
 * @tokens: pointer to the tokens array
 * @path: pointer to variable path
 * @line: pointer to buffer inputed by user
 * @fullpath: pointer to fulpath
 * @flag: flag marking if full_path was malloced
 * Return: void
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
if (flag == 1)
free(fullpath);
free(line);
free(path);
free(tokens);
}

/**
 * free_dp - free doble pointer
 * @array: doble pointer to free
 * @length: length of doble pointer
 * Return: void
 */
void free_dp(char **array, unsigned int length)
{
unsigned int i;

for (i = 0; i < length; i++)
free(array[i]);
free(array);
}
