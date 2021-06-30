#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: variable of string
 * Returns: void
 */
void puts2(char *str)
{
int c;
for (c = 0; str[c] != 0; c++)
{
if (c % 2 != 1)
{
_putchar(str[c]);
}
}
_putchar('\n');
}
