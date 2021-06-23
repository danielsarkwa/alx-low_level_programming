#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: is value of a letter
 * Return: 1 if c is a letter, lowercase or uppercase else 0 if not
 */
int _isalpha(int c)
{
if ((c <= 97 && c >= 122) || (c >= 65 && c <= 96))
{
return (1);
}
else
{
return (0);
}
}
