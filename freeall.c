#include <shell.h>
/**
 * free_all - frees all malloc dynamical memory space at end of main loop
 * @tokens: pointer to tokens array
 * @path: pointer to path variable
 * @line: pointer to user input buffer
 * @fullpath: pointer to full path
 * @flag: flag marking if full_path was malloc'd
 * Return: void (0)
 */
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
	free(path);
	free(tokens);
	free(line);
	if (flag)
		free(fullpath);
}

/**
 * free_dp - free a string of memory pointer
 * @array:strings to be free
 * @length: double pointer
 * Return: void (0)
 */
void free_dp(char **array, unsigned int length)
{
	for (unsigned int i = 0; i < length; i++)
	{
		free(array[i]);
	}
	free(array);
}



