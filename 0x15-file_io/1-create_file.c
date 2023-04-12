#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails -1 else 1
 */

int create_file(const char *filename, char *text_content)
{
int file = -1;
int bytes_written = 0;

if (filename == NULL)
{
return (-1);
}

file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file == -1)
{
return (-1);
}

if (text_content != NULL)
{
bytes_written = write(file, text_content, strlen(text_content));
if (bytes_written == -1)
{
close(file);
return (-1);
}
}

close(file);
return (1);
}
