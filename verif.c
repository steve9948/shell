#include "shell.h"
/**
 *verif- verify if its a built in function
 *@command: tokenized user input to be the checked command
 *@buff: line drived from the getline method
 *Return: 1 if cmd excuted 0 not executed
 */
int verif(char **ucmd, char *buff)
{
	if (handle_builtin(ucmd, buff))
		return (1);
	else if (**ucmd == '/')
	{
		execute(ucmd[0], ucmd);
		execution(ucmd[0], ucmd);
		return (1);
	}
	return (0);
}
