#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
/**
 * read_textfile - Lee un archivo de texto e imprime su contenido
 * @filename: nombre del archivo a leer
 * @letters: número de letras a leer e imprimir
 *
 * Return: número de letras leídas e impresas, o 0 si falla
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (wr);
}

