#include "main.h"
/**
 *_isalpha - Checks for alphabetic character
 *@c: The character to be checked
 *Return: 0 for anything or 1 for alphabetic character
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
