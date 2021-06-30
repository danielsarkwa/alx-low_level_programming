#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable for first pointer
 * @b: variable for second pointer
 * Returns: void
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = &c;
}
