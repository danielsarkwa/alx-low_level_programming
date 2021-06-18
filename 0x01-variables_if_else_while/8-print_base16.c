#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * Return: 0
 */
int main(void)
{
char b;
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (b = 'a'; b < 'g'; b++)
{
putchar(b);
}
putchar('\n');

return (0);
}
