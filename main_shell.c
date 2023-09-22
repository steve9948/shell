#include "main.h"
/**
* main - carries out the read, execute then print result loop
* @ac: argument count
* @av: argument vector
* @envp: environment vector
*
* Return: 0
*/

int main(int ac, char **av, char *envp[])
{
	char *in_sequence = NULL, *p_cmd = NULL, *path = NULL;
	size_t s_buff = 0;
	ssize_t l_size = 0;
	char **u_cmd = NULL, **paths = NULL;
	(void)envp, (void)av;
	if (ac < 1)
		return (-1);
	signal(SIGINT, sig_processor);
	while (1)
	{
		release_buffers(u_cmd);
		release_buffers(paths);
		free(p_cmd);
		user_cmd();
		l_size = getline(&in_sequence, &s_buff, stdin);
		if (l_size < 0)
			break;
		info.ln_count++;
		if (in_sequence[l_size - 1] == '\n')
			in_sequence[l_size - 1] = '\0';
		u_cmd = parser_token(in_sequence);
		if (u_cmd == NULL || *u_cmd == NULL || **u_cmd == '\0')
			continue;
		if (verif(u_cmd, in_sequence))
			continue;
		path = locate_path();
		paths = parser_token(path);
		path_u_cmd = verif_path(paths, u_cmd[0]);
		if (!path_u_cmd)
			perror(av[0]);
		else
			command_runner(p_cmd, u_cmd);
	}
	if (l_size < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(in_sequence);
	return (0);
}

