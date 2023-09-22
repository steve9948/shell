#include "main.h"

/**
* parser_tokenen - Tokenizes given input
* @in_sequence: String input to be tokenized
*
* Return: array of strings
*/
char **parser_tokenen(char *in_sequence)
{
	char *buf = NULL, *ptr_buff = NULL, *token = NULL, *delim = " :\t\r\n";
	char **toks = NULL;
	int t_size = 1;
	size_t index = 0, flag = 0;

	buf = str_duplicator(in_sequence);
	if (!buf)
		return (NULL);
	ptr_buff = buf;

	while (*ptr_buff)
	{
		if (str_character(delim, *ptr_buff) != NULL && flag == 0)
		{
			t_size++;
			flag = 1;
		}
		else if (str_character(delim, *ptr_buff) == NULL && flag == 1)
			flag = 0;
		ptr_buff++;
	}
	toks = malloc(sizeof(char *) * (t_size + 1));
	tok = strtok(buf, delim);
	while (tok)
	{
		toks[index] = str_duplicator(tok);
		if (toks[index] == NULL)
		{
			free(toks);
			return (NULL);
		}
		tok = strtok(NULL, delim);
		index++;
	}
	toks[index] = '\0';
	free(buf);
	return (toks);
}

