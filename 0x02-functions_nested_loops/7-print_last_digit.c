#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is value of a number
 * Return: last value of a number
 */
int print_last_digit(int n)
{
if(n >= 0)
{
return (n % 10);
}
else
{
return (-n % 10);
}
}
