#include "shell.h"

/**
* builtin_env - Handles the execution of standard builtin functions
* @cmd: Tokenized cmds to be handled
* @line: The origial Input to be handled
*
* Return: 1 if cmd is in bulit and is executed, 0 if not
*/

int builtin_env(char **cmd, char *line)
{
	struct builtin builtin = {"env", "exit"};

	if (compare(*cmd, builtin.env) == 0)
	{
		/* Handle the "env" built-in command by printing environment variables*/
		print_env();
		return (1);
	}
	else if (compare(*cmd, builtin.exit) == 0)
	{
		/*Handle the "exit" built-in command*/
		user_exit(cmd, line);
		return (1);
	}
	else
		/*Not a built-in command*/
	return (0);
}
