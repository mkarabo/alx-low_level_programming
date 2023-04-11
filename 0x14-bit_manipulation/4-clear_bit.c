#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 *
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int bit_mask;

if (index >= (sizeof(unsigned long int) * 8 - 1))
return (-1);

bit_mask = 1UL << index;
bit_mask = ~bit_mask;
*n &= bit_mask;

return (1);
}
