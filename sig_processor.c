#include "main.h"

/**
 *sig_processor- monitors the interactive mode
 *@m: the signal number
 *Return: nothing
 */

void sig_processor(int m)
{
	(void)m;
	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}

