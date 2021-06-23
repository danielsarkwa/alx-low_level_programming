#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description - prints the sum of all the multiples of 5, 3 except 1024
 * Return: 0
 */
int main(void)
{
int i = 0;
int sum = 0;
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
i++;
}
printf(sum);
return (0);
}
