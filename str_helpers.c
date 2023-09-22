#include "main.h"

/**
* str_comparer - compares two strings
* @str1: compares str2;
* @str2: compares str1;
*
* Return: returns difference between the strings
*/
int str_comparer(char *str1, char *str2)
{
	int i = 0, result;

	while (*(str1 + i) == *(str2 + i) && *(str1 + i) != '\0')
		i++;

	result = (*(str1 + i) - *(str2 + i));

	return (result);
}

/**
* str_length - returns the length of a string
* @s: string passed
*
* Return: returns length of string passed
*/
int str_length(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
* compared_str - compares two strings up to n bytes
* @str1: compared to str2
* @str2: compared to str1
* @n: number of bytes
*
* Return: difference between str1 and str2
*/
int compared_str(char *str1, char *str2, int n)
{
	int i;

	for (i = 0; str1[i] && str2[i] && i < n; i++)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	}
	return (0);
}

/**
* str_duplicator - dupicates string
* @s: to be duplicated
*
* Return: pointer to duplicate string
*/
char *str_duplicator(char *s)
{
	char *ptr;
	int i, len;

	if (s == NULL)
		return (NULL);

	len = str_length(s);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; *s != '\0'; s++, i++)
		ptr[i] = s[0];

	ptr[i++] = '\0';
	return (ptr);
}

/**
* str_character - locates a character in a string
* @s: string to be checked
* @c: character to be located
*
* Return: returns pointer to first occurence of character
* or NULL if character not found
*/
char *str_character(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}

