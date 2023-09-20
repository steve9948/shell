#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* environment variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

void print_env(void);

/* string verifiers and handlers */
void process_data(char *cmd_ptr, char **ucmd);
int string_comp(char *str1, char *str2, int n);
int compare(char *str1, char *str2);
char *string_dup(char *str);
int string_length(char *str);
char *string_char(char *str, char c);

/**
 * ident_path - path to the executable bin
 *
 * Return: void
 */
char *ident_path(void)


/*Buitins verifier and handlers*/
char **tokenizer(char *line);
int builtin_env(char **cmd, char *line);
void user_input(void);
int verif(char **ucmd, char *buffer);
void user_exit(char **cmd, char *line);
char *_path_verification(char **path, char *cmd);

/**
 * verif_path - Confirms the path to the valid user input
 * @path: The command addres
 * @cmd: the command to be interpreated
 *
 * Return: (0).
 */
char *verif_path(char *path, char *cmd)
void verif_sig(int j);


/* helper function to free memory */
void free_buffs(char **buffer);

/**
 * struct builtin - verifies if its a builtin command
 * @env: the environmet
 * @exit: The status
 *
 * Return: (0)
 */
struct builtin
{
	char *env;
	char *exit;
} builtin;

/**
 * struct info - gives the final information of the user cmd
 *
 *@final_exit: the last value
 *@ln_count: the counted span
 *
 * Return: (0)
 */
struct info
{
	int final_exit;
	int ln_count;
} info;

/**
 * struct flags - The string commands
 *
 * @interactive: The verifier to check wether its a command or not
 *
 * Return: (True or false)
 */
struct flags
{
	bool interactive;
} flags;

#endif
