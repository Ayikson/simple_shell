#include "shell.h"

/**
 * _getenv - gets an environ variable
 * @name: environ variable to get
 * Return: pointer to environ variable or NULL if no match
 */
char *_getenv(const char *name)
{
unsigned int i;
char *env_name, *env_value;

for (i = 0; environ[i]; i++)
{
env_name = strtok(environ[i], "=");
env_value = strtok(NULL, "=");
if (_strcmp(env_name, name) == 0)
return (env_value);
}
return (NULL);
}

/**
 * copy_env - copies environ variable
 * @environ_copy: pointer to copy of environ variable
 * @environ_length: length of environ variable
 * Return: doble pointer to copy of environ variable
 */
char **copy_env(char **environ_copy, unsigned int environ_length)
{
unsigned int i;

environ_copy = malloc(sizeof(char **) * (environ_length));
if (environ_copy == NULL)
{
errors(3);
return (NULL);
}
for (i = 0; i < environ_length; i++)
{
environ_copy[i] = _strdup(environ[i]);
if (environ_copy[i] == NULL)
{
errors(3);
return (NULL);
}
}
return (environ_copy);
}
