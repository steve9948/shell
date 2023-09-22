#include "main.h"
/**
 *verif- checks if its a builtin function
 *@cmd: tokenized user input
 *@buf: in_sequence drived from the getline function
 *Return: 1 if cmd excuted 0 if not executed
 */
int verif(char **cmd, char *buf)
{
	if (internal_commands(cmd, buf))
		return (1);
	else if (**cmd == '/')
	{
		command_runner(cmd[0], cmd);
		return (1);
	}
	return (0);
}

