#include <stdio.h>
/**
 * main - main block
 * Description: Prints alphabet in except q/e using 'putchar' function.
 * Return: 0
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
{
continue;
}
putchar(ch);
}
putchar('\n');

return (0);
}
