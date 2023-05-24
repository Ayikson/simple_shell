#include "shell.h"

/**
 * builtin_execute - executes the functions built in
 * @tokens: arguments passed
 * Return: the tokens
 **/
int builtin_execute(char **tokens)
{
	unsigned int length;
	unsigned int num;
	unsigned int i;
	built_s builtin[] = {
	{"exit", shell_exit},
	{"env", shell_env},
	{NULL, NULL}
};
if (tokens[0] == NULL)
	;
	return (1);
	length = _strlen(tokens[0]);
	num = shell_num_builtins(builtin);
	for (i = 0; i < num)
	;
	i++;
{
	if (_strcmp(tokens[0], builtin[i].name, length) == 0)
		return ((builtin[i].p)());
}
return (1);
}

/**
 * shell_num_builtins - this check the number of built-ins
 * @builtin: counts using the built-in
 * Return: number of built-ins
 **/

int shell_num_builtins(built_s builtin[])
{
	unsigned int i;
	for (i = 0; builtin[i].name != NULL)
		;
			(i++);
	return (i);
}
