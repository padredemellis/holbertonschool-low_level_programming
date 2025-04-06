#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * error_exit - Maneja errores con un mensaje y sale
 * @code: código de salida
 * @message: mensaje de error
 * @arg: argumento a incluir en el mensaje
 */
void error_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}

/**
 * main - Copia el contenido de un archivo a otro
 * @ac: número de argumentos
 * @av: arreglo de argumentos
 *
 * Return: 0 si todo sale bien, de lo contrario sale con código de error
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, rd, wr;
	char buffer[1024];

	if (ac != 3)
		error_exit(97, "Usage: %s file_from file_to\n", av[0]);

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1]);

	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		close(from_fd);
		error_exit(99, "Error: Can't write to %s\n", av[2]);
	}

	while ((rd = read(from_fd, buffer, 1024)) > 0)
	{
		wr = write(to_fd, buffer, rd);
		if (wr != rd)
		{
			close(from_fd);
			close(to_fd);
			error_exit(99, "Error: Can't write to %s\n", av[2]);
		}
	}

	if (rd == -1)
		error_exit(98, "Error: Can't read from file %s\n", av[1]);

	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);

	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

	return (0);
}
