#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: variable of string
 * Returns: void
 */
void print_rev(char *s)
{
int ch = 0;
while (s[ch] != 0)
{
ch++;
}

for (ch = ch - 1; ch >= 0; ch--)
{
_putchar(s[ch]);
}
_putchar('\n');
}
