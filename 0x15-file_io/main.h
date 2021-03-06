#ifndef MAINH
#define MAINH

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

int _putchar(char c);
int _strlen(char *s);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cpy_file(int fd_src, int fd_dest, char *name_source, char *name_dest);


#endif
