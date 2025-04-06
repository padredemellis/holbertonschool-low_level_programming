#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Crea un archivo y escribe contenido en él
 * @filename: nombre del archivo
 * @text_content: contenido a escribir en el archivo
 *
 * Return: 1 si fue exitoso, -1 si falla
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
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


