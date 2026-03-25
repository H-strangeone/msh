#ifndef PARSER_H
#define PARSER_H

#include "msh.h"

char *msh_read_line(void);
char **msh_split_line(char *line);
int msh_has_pipe(char *line);
char **msh_split_pipe(char *line);
int msh_has_redirect(char *line);
char **msh_parse_redirect(char *line, char **filename, int *is_output);
#endif
