#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - checks for uppercase character
 * @c: is value of a number
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
