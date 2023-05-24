#include "shell.h"

/**
 * errors - prints errors based on the case
 * @error: error number connected with perror statement
 * Return: void
 */
void errors(int error)
{
char *error_msg = NULL;

switch (error)
{
case 1:
error_msg = ERR_FORK;
break;
case 2:
break;
case 3:
error_msg = ERR_MALLOC;
break;
case 4:
error_msg = ERR_PATH;
break;
default:
return;
}
if (error_msg != NULL)
{
write(STDERR_FILENO, error_msg, _strlen(error_msg));
}
perror("Error");
}
