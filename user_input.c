#include "shell.h"

/**
* user_input - prints $ to let user type their input
* prints The cmd prompt
* Return: Nothing
*/
void user_input(void)
{

	/*Check if STDIN and STDOUT are associated with terminal (interactive mode)*/
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;

	/*If the shell is in interactive mode, print the prompt "$ " to STDERR*/
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
