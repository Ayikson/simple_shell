#include "shell.h"

/**
 * child - child process function
 * @fullpath: executable full path
 * @tokens: tokenized input of user
 * Return: 0 when successful
 */
int child(char *fullpath, char **tokens)
{
	pid_t child_pid;
	int status;
	int execve_status;
	char **envp = environ;

	child_pid = fork();
	if (child_pid == -1)
	{
		errors(1);
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		execve_status = execve(fullpath, tokens, envp);
		if (execve_status == -1)
			return (-1);
	}
	else
	{
		wait(&status);
		return (WEXITSTATUS(status));
	}
}
