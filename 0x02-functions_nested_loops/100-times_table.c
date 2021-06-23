#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number to start from
 * Return: void
 */
void print_times_table(int n)
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
