#include "holberton.h"

/**
 * print_line -  prints the numbers, from 0 to 9
 * @n: is value of a number
 * Return: void
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
