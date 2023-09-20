#include "shell.h"

/**
* user_exit - Manages the exit of the cmd
* @cmd: The tokenized cmd
* @line: The read input from stdin
*
* Return: Nothing
*/

void user_exit(char **cmd, char *line)
{
	/*Free memory for the original input line*/
	free(line);

	/*Free memory for the command and its arguments*/
	free_buffs(cmd);

	/*Exit program with a status of 0 (successful termination)*/
	exit(0);
}
