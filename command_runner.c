#include "main.h"

/**
 * command_runner - executes commands entered by users
 *@cp: u_cmd
 *@cmd:vector array of pointers to u_cmds
 * Return: 0
 */
void command_runner(char *cp, char **cmd)
{
	pid_t child_pid;
	int status;
	char **env = environ;

	child_pid = fork();
	if (child_pid < 0)
		perror(cp);
	if (child_pid == 0)
	{
		execve(cp, cmd, env);
		perror(cp);
		free(cp);
		release_buffers(cmd);
		exit(98);
	}
	else
		wait(&status);
}
