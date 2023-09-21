#include "shell.h"

/**
* main - carries out the read, execute then print outputto stdout
* @ac: Argument count (argc)
* @av: Argument vector (argv)
* @envp: Environment pointer
*
* Return: 0
*/

int main(int ac, char **av, char *envp[])
{
	(void)envp, (void)av;
	char *line = NULL, *pathcommand = NULL, *path = NULL;
	size_t bufsize = 0;
	ssize_t linesize = 0;
	char **cmd = NULL, **paths = NULL;
	(void)envp, (void)av;
	if (ac < 1)
		return (-1);
	signal(SIGINT, verif_sig);
	while (1)
	{
		free_buffs(cmd);
		free_buffs(paths);
		free(pathcommand);
		user_input();
		linesize = getline(&line, &bufsize, stdin);
		if (linesize < 0)
			break;
		info.ln_count++;
		if (line[linesize - 1] == '\n')
			line[linesize - 1] = '\0';
		cmd = tokenizer(line);
		if (cmd == NULL || *cmd == NULL || **cmd == '\0')
			continue;
		if (verif(cmd, line))
			continue;
		path = ident_path();
		paths = tokenizer(path);
		pathcommand = _path_verification(paths, cmd[0]);
		if (!pathcommand)
			perror(av[0]);
		else
			process_data(pathcommand, cmd);
	}
	if (linesize < 0 && flags.interactive)
		write(STDERR_FILENO, "\n", 1);
	free(line);
	return (0);
}
