#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int display_prompt(void);
int execute(char *pathname, char **argv, char **environ);
int exit_fn(char *lineptr, ssize_t *gRet);
void free_pa(char **argv, char *path);
char *iso_path(char **env);
char **sh_tok(char *lineptr);
int _strcmp(char *s1, char *s2);
int _strncmp(char *str1, char *str2, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strlen(char *s);
char *val_pathname(char *command, char *path);

#endif /* SHELL_H */
