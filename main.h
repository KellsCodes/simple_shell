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


void exit_cmd(char **command, char *line);
void free_buffers(char **buf);








struct builtin
{ 
char *env;  
char *exit; 
} builtin;



#endif /* MAIN_H */
