#include "main.h"

/**
* dispplay_env - prints the environment string to stdout
*
* Return: 0
*/
void dispplay_env(void)
{
	int x = 0;
	char **env = environ;

	while (env[x])
	{
		write(STDOUT_FILENO, (const void *)env[x], str_length(env[x]));
		write(STDOUT_FILENO, "\n", 1);
		x++;
	}
}
