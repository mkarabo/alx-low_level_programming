#include "main.h"

/**
 *print_line - Draws a straight line according to parameters
 * @n: the number of lines to draw
 *Return: empty
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
_putchar(95);
}     
_putchar('\n');
}
}
