#include "shell.h"

/**
 * _which - PATH variable searches folders for the command
 * @command: command to look for
 * @fullpath: command of full path to execute
 * @path: full PATH variable
 * Return: full_path pointer
 */
char *_which(char *command, char *fullpath, char *path)
{
char *path_copy = strdup(path);
char *token;

if (path_copy == NULL)
{
errors(3);
return (NULL);
}
token = strtok(path_copy, ":");
if (token == NULL)
{
token = strtok(NULL, ":");
}
while (token != NULL)
{
size_t path_length = strlen(token);
size_t fullpath_length = path_length + strlen(command) + 2;
fullpath = malloc(fullpath_length);
if (fullpath == NULL)
{
errors(3);
return (NULL);
}
sprintf(fullpath, "%s/%s", token, command);
if (access(fullpath, X_OK) != 0)
{
free(fullpath);
fullpath = NULL;
token = strtok(NULL, ":");
}
else
{
break;
}
}
free(path_copy);
return (fullpath);
}
