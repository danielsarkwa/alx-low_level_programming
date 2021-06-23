#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the start number
 * Return: void
 */
void print_to_98(int n)
{
int i;
if (n >= 0 && n < 98)
{
for (i = 0; n + i <= 98; i++)
{
if (n + i < 10)
{
_putchar(n + i + 48);
}
else
{
_putchar(n + i / 10 + 48);
_putchar(n + i % 10 + 48);
}
}
}
else if (n > 98)
{
for (i = 0; n - i >= 98; i++)
{
}
}
}
