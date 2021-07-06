#include "holberton.h"

/**
 * *_memcpy - copies from memory area of n bytes from src to memory area dest
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}