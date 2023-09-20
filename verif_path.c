#include "shell.h"

/**
* verif_path - adds the path to the cmd
* @path: A string representing the path of the cmd
* @cmd: User entered string as cmd
*
* Return: buffer containing cmd with path on success
* NULL on failure
*/
char *verif_path(char *path, char *cmd)
{
	char *buffer;
	size_t i = 0, j = 0;

	if (cmd == 0)
		cmd = "";

	if (path == 0)
		path = "";

	/*Allocate memory for the result buffer*/
buffer = malloc(sizeof(char) * (string_length(path) + string_length(cmd) + 2));
	if (!buffer)
		return (NULL);

	/*Copy the 'path' string into the buffer*/
	while (path[i])
	{
		buffer[i] = path[i];
		i++;
	}

	/*Add a '/' character to separate 'path' and 'cmd' if it's not already there*/
	if (path[i - 1] != '/')
	{
		buffer[i] = '/';
		i++;
	}

	/*Copy the 'cmd' string into the buffer after the '/'*/
	while (cmd[j])
	{
		buffer[i + j] = cmd[j];
		j++;
	}
	/* Null-terminate the buffer*/
	buffer[i + j] = '\0';
	return (buffer);
}
