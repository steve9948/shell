#include "main.h"

/**
* verif_path - checks whether path is valid
* @path: tokenized path
* @u_cmd: user entered u_cmd
*
* Return: path appended with u_cmd on success
* NULL on failure
*/
char *verif_path(char **path, char *u_cmd)
{
	int i = 0;
	char *result;

	while (path[i])
	{
		result = extender_appender(path[i], u_cmd);
		if (access(result, F_OK | X_OK) == 0)
			return (result);
		free(result);
		i++;
	}
	return (NULL);
}

