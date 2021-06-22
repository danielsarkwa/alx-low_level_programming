#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is value of a number
 * Return: last value of a number
 */
int print_last_digit(int n)
{
int l;
if (n >= 0)
{
l = n % 10;
return (l);
}
else
{
l = -n % 10;
return (l);
}
}
