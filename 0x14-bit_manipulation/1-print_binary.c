#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
int i;
int start_count = 0;

for (i = 63; i >= 0; i--)
{
if ((n >> i) & 1)
{
_putchar('1');
start_count++;
}
else if (start_count)
_putchar('0');
}
if (!start_count)
_putchar('0');
}

