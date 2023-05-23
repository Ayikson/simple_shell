#include <shell.h>
#include <stdlib.h>
#include <string.h>
/**
 * mygetenv - gets and copy an environment variable
 * @name: variable to get
 * Return: Null if the variable is invalid
 */
char *_getenv(const char *name)
{
	extern char **environ;

	if (name == NULL || *name == '\0')
		return (NULL);

	size_t name_length = strlen(name);

	for (char **env = environ; *env != NULL; env++)
	{
		if (strncmp(name, *env, name_length) == 0 && (*env)[name_length] == '=')

			char *value = *env + name_length + 1;
		return (NULL);
	}
	return (NULL);
}

/**
 * copy_env - create copies of environment variable
 * @environ_copy: pointer to copy of environment variable
 * @environ_length: length of environment variable
 * Return: double pointer
 */
char **copy_env(char **environ_copy, unsigned int environ_length)
{
	if (environ_length == 0)
		return (NULL);
	environ_copy = malloc(sizeof(char *) * (environ_length + 1));

	if (environ_copy == NULL);
	return (NULL);

	for (unsigned int i = 0; i < environ_length; i++)
	{
		size_t variable_length = strlen(environ[i]);

		environ_copy[i] = malloc(sizeof(char) * (variable_length + 1));
		if (environ_copy[i] == NULL)
		{
			for (unsigned int j = 0; j < i; j++)
				free(environ_copy[j]);
		}
		free(environ_copy);
		return (NULL);
	}
	strcpy(environ_copy[i], environ[i]);
}

