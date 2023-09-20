#include "shell.h"
/**
* compare - Strings comparer
* @str1: compared to str2;
* @str2: compared to str1;
*
* Return: The difference between between the two strings
*/
int compare(char *str1, char *str2)
{
	int a = 0, output
		;
	while (*(str1 + a) == *(str2 + a) && *(str1 + a) != '\0')
		a++;
	output = (*(str1 + a) - *(str2 + a));
	return (output);
}
/**
* string_length - The string length
* @str: string entered
*
* Return: The length of the string
*/
int string_length(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
/**
* string_comp - compares two strings up to b bytes
* @str1: compared to str2
* @str2: compared to str1
* @b: number of bytes in a string
*
* Return: The difference between str1 and str2
*/
int string_comp(char *str1, char *str2, int b)
{
	int a;

	for (a = 0; str1[a] && str2[a] & a < b; a++)
	for (a = 0; str1[a] && str2[a] && a < b; a++)
	{
		if (str1[a] != str2[a])
			return (str1[a] - str2[a]);
	}
	return (0);
}
/**
* string_dup - String duplicator
* @str: String to be duplicated
*
* Return: A Pointer to the duplicated string
*/
char *string_dup(char *str)
{
	char *ptr;
	int a, len;

	if (str == NULL)
		return (NULL);
	len = string_length(str);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (a = 0; *str != '\0'; str++, a++)
		ptr[a] = str[0];
	ptr[a++] = '\0';
	return (ptr);
}
/**
* string_char- character locator in a string
* @str: string to be checked
* @c: character to be located
*
* Return: A pointer to first character if any otherwise NULL
*/
char *string_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (!c)
		return (str);
	return (NULL);
}
