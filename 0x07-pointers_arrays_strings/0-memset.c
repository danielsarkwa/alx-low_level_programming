#include "holberton.h"

/**
 * _memset - add n byte of b to array
 * @s: an array
 * @b: replace character
 * @n: number of bytes to replace
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; j < n; j++)
s[j] = b;

return (s);
}
