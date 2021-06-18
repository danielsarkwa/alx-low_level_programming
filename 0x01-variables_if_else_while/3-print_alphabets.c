#include <stdio.h>
/**
 * main - main block
 * Description: Prints alphabet in lower/uppercase using 'putchar' function.
 * Return: 0
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}

if (ch == 'z')
{
ch = 'A';
}

for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
