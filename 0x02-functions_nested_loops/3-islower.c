#include "main.h"
/**
 * _islower - checks for lower case character
 *@c: The character to be checked
 *Return: 0 (Success) or 1 if c is lowercase
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
