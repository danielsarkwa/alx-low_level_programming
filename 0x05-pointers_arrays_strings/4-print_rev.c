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

int i;
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
