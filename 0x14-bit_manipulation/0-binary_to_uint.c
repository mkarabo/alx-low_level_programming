#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a binary number string.
 * Return: The converted number,
 *  or 0 for an invalid character in the string
 * or if the string is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == 0)
return (0);

for (; *b != '\0'; b++)
{
if (*b == '0' || *b == '1')
{
result <<= 1;
result += (*b - '0');
}
else
return (0);
}
return (result);
}
