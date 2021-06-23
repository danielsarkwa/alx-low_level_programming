#include "holberton.h"
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}