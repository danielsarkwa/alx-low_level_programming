#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: is value of a letter
 * Return: 1 if c is lowercase else 0 if not
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
