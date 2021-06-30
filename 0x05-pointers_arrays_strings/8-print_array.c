#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: variable for first pointer
 * @n: is the number of elements of the array to be printed
 * Returns: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%d", *a);
a++;
}
else
{
printf("%d, ", *a);
a++;
}
}
printf("\n");
}
