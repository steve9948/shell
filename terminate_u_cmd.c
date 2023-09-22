#include "main.h"

/**
* terminate_u_cmd - handles the termination of the u_cmd
* @u_cmd: tokenized u_cmd
* @in_sequence: input read from stdin
*
* Return: no return
*/
void terminate_u_cmd(char **u_cmd, char *in_sequence)
{
	free(in_sequence);
	release_buffers(u_cmd);
	exit(0);
}

