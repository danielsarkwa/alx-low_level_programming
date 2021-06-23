#include "holberton.h"
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}