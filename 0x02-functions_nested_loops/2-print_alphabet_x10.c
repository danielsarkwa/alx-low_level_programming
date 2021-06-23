#include "holberton.h"

/**
 * print_alphabet - Entry point
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: Always void
 */
void print_alphabet_x10(void)
{
int r;
for (r = 0; r <= 10; r++)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
