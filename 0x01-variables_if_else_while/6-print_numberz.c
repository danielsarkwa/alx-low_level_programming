#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * Return: 0
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
putchar(n + '0');
}
putchar('\n');

return (0);
}
