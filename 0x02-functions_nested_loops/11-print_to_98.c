#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the start number
 * Return: void
 */
void print_to_98(int n)
{
int limit = 98;
int num = (n);
int step = n > limit ? -1 : 1;
int stop;
while (!stop)
{
printf("%d%s", num, (num == limit ? "\n" : ", "));
stop = num == limit;
num += step;
}
}
