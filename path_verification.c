#include "shell.h"

/**
* _path_verification - Tests to verify if path is valid
* @path: tokenized path
* @cmd: user entered cmd
*
* Return: Path appended with cmd on success otherwise NULL on failure
*/
char *_path_verification(char **path, char *cmd)
{
	int i = 0;
	char *output;

	while (path[i])
	{
		output = verif_path(path[i], cmd);
		if (access(output, X_OK | F_OK) == 0)
			/*command found*/
			return (output);
		free(output);
		i++;
	}
	/*Command not found*/
	return (NULL);
}
