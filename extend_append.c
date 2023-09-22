#include "main.h"

/**
* extender_appender - adds path to u_cmd
* @path: path of u_cmd
* @u_cmd: user entered u_cmd
*
* Return: buffer containing u_cmd with path on success
* NULL on failure
*/
char *extender_appender(char *path, char *u_cmd)
{
	char *buf;
	size_t i = 0, j = 0;

	if (u_cmd == 0)
		u_cmd = "";

	if (path == 0)
		path = "";

	buf = malloc(sizeof(char) * (str_length(path) + str_length(u_cmd) + 2));
	if (!buf)
		return (NULL);

	while (path[i])
	{
		buf[i] = path[i];
		i++;
	}

	if (path[i - 1] != '/')
	{
		buf[i] = '/';
		i++;
	}
	while (u_cmd[j])
	{
		buf[i + j] = u_cmd[j];
		j++;
	}
	buf[i + j] = '\0';
	return (buf);
}

