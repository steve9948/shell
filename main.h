#ifndef MAIN_H
#define MAIN_H

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

/* handle builtins */
int verif(char **cmd, char *buf);
void user_cmd(void);
void sig_processor(int m);
char **parser_token(char *in_sequence);
char *verif_path(char **path, char *u_cmd);
char *extender_appender(char *path, char *u_cmd);
int internal_commands(char **u_cmd, char *in_sequence);
void terminate_u_cmd(char **u_cmd, char *in_sequence);

void dispplay_env(void);

/* handles strings */
int str_comparer(char *str1, char *str2);
int str_length(char *s);
int compared_str(char *str1, char *str2, int n);
char *str_duplicator(char *s);
char *str_character(char *s, char c);

void command_runner(char *cp, char **cmd);
char *locate_path(void);

/* helper function the free method */
void release_buffers(char **buf);

/**
 * struct builtin - Check whether it bultin command
 * @env: environment variable
 * @exit: exit cmd
 *
 * Return: nothing
*/
struct builtin
{
	char *env;
	char *exit;
} builtin;

/**
 * struct info - command info
 * @final_exit: Command exit
 * @ln_count: Command length
 *
 * Return: nothing
*/
struct info
{
	int final_exit;
	int ln_count;
} info;

/**
 * struct flags - command flags
 * @interactive: lexer verifier
 *
 * Return: nothing
 */
struct flags
{
	bool interactive;
} flags;

#endif /* MAIN_H */

