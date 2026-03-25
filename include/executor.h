#ifndef EXECUTOR_H
#define EXECUTOR_H

#include "msh.h"

int msh_launch(char **args);
int msh_execute(char **args);
int msh_execute_pipe(char **commands);
int msh_execute_redirect(char *line);
#endif
