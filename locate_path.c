#include "main.h"

/**
* locate_path - finds the path from the global enviroment
* Return: NULL if path is not found or path if path is found.
*/
char *locate_path(void)
{
	int x;
	char **env = environ, *path = NULL;

	while (*env)
	{
		if (compared_str(*env, "PATH=", 5) == 0)
		{
			path = *env;
			while (*path && x < 5)
			{
				path++;
				x++;
			}
			return (path);
		}
		env++;
	}
	return (NULL);
}

