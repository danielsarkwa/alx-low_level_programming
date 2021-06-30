#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - prints the length of a string
 * @s: integer variable of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
int ch = 0;

while (s[ch] != 0)
{
ch++;
}
return (ch);
}
