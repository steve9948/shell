#include "main.h"

/**
* user_cmd - prints $ to let user know the program is
* ready to take their input
* prints the prompt if the shell is in interactive mode
* Return: no return
*/
void user_cmd(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}

