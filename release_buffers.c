#include "main.h"

/**
* release_buffers - frees buffers
* @buf: buffer to be freed
*
* Return: no return
*/
void release_buffers(char **buf)
{
	int i = 0;

	if (!buf || buf == NULL)
		return;
	while (buf[i])
	{
		free(buf[i]);
		i++;
	}
	free(buf);
}

