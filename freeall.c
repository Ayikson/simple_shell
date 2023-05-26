#include "holberton.h"

/**
 * free_all - frees all malloc'd space at end of main loop
 * @tokens: pointer to tokens array
 * @path: pointer to path variable
 * @line: pointer to user input buffer
 * @fullpath: pointer to full path
 * @flag: flag marking if full_path was malloc'd
 * Return: void
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
free(path);
free(tokens);
free(line);
if (fullpath && flag == 1)
free(fullpath);
}

/**
 * free_dp - free string of memory pointer
 * @array: strings to be freed
 * @length: doble pointer
 * Return: void
 */
void free_dp(char **array, unsigned int length)
{
unsigned int i;

i = 0;
while (i < length)
{
free(array[i]);
array[i] = NULL;
i++;
}
free(array);
array = NULL;
}
