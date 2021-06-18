#include <stdio.h>
/**
 * main - main block
 * Description: Prints the alphabet in lowercase using 'putchar' function.
 * Return: 0
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');

return (0);
}
