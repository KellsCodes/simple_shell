#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>


/*  built infuctions */
void exit_cmd(char **command, char *line);

/* helper fuctions fuctions */
void free_buffers(char **buf);
#endif /* MAIN_H */
