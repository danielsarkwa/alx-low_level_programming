#include "holberton.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string array
 * @accept: characters to find in s
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
unsigned int j;
unsigned int l;
int b;

while (s[i] != '\0')
{
b = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
b = 1;
}
j = 0;
if (b == 0)
break;
i++;
l++;
}
return (i);
}
