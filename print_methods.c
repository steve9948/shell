#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned and errno set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* s_print - prints a string
* @s: string to be printed
*
* Return: number of characters printed
*/
int s_print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}

