#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: variable of string
 * Returns: void
 */
void rev_string(char *s)
{
int length;
int temp;
int i;
length = strlen(s);

for (c = 0; c < length - 1; c++)
{
end++;
}

for (c = 0; c < length/2; c++)
{        
temp   = *end;
*end   = *begin;
*begin = temp;

begin++;
end--;
}
}
