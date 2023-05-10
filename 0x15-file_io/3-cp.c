#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Write a program that copies the content of a file to another file
* @argc: argument count
* @argv: array of argument tokens
* Return: Always 0 for success
*/
int main(int argc, char *argv[])
{
int source_file, destn_file, started, begin;
mode_t perm = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
char buffer[BUFSIZ];

if (!(argc == 3))
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
source_file = open(argv[1], O_RDONLY);
if (source_file == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
destn_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, perm);
if (destn_file == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
started = 1;
while (started)
{
started = read(source_file, buffer, BUFSIZ);
if (started == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
if (started > 0)
{
begin = write(destn_file, buffer, started);
if (begin != started || begin == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
}
if (close(source_file) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file), exit(100);
if (close(destn_file) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destn_file), exit(100);
return (0);
}
