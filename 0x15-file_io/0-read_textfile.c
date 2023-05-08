#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file = -1;
char buffer = '\0';
ssize_t bytes_read = 0;
ssize_t bytes_written = 0;
size_t i;

if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
for (i = 0; i < letters; i++)
{
ssize_t bytes = read(file, &buffer, 1);
if (bytes == -1 || bytes == 0)
{
break;
}
bytes_read++;
bytes_written = write(STDOUT_FILENO, &buffer, 1);
if (bytes_written == -1 || bytes_written == 0)
{
break;
}
}
close(file);
if (bytes_read == 0)
{
return (0);
}
return (bytes_read);
}

