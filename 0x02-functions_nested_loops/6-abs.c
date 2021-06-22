#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: is value of a integer
 * Return: an interger always as the absolute value
 */
int _abs(int n)
{
int i = n;
if (n < 0)
{
i = n * (-1);
return (i);
}
else
{
return (i);
}
}
