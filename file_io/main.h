#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>  /* Para ssize_t */
#include <stddef.h>     /* Para size_t */
#include <unistd.h>     /* Para write(), read() */
#include <fcntl.h>      /* Para open() */
#include <stdlib.h>     /* Para malloc(), free() */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif /* MAIN_H */

