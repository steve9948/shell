#include "main.h"

/**
* internal_commands - handles command_runner of builtin functions
* @u_cmd: tokenized commands
* @in_sequence: input read from stdin
*
* Return: 1 if executed, 0 if not
*/
int internal_commands(char **u_cmd, char *in_sequence)
{
	struct builtin builtin = {"env", "exit"};

	if (str_comparer(*u_cmd, builtin.env) == 0)
	{
		dispplay_env();
		return (1);
	}
	else if (str_comparer(*u_cmd, builtin.exit) == 0)
	{
		terminate_u_cmd(u_cmd, in_sequence);
		return (1);
	}
	return (0);
}

