#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Agrega texto al final de un archivo
 * @filename: nombre del archivo
 * @text_content: texto a agregar
 *
 * Return: 1 si éxito, -1 si falla
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wr = write(fd, text_content, len);
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

