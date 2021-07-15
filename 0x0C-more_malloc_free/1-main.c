#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char *cct;

  cct = string_nconcat("Holberton ", "School !!!", 6);
  printf("%s\n", cct);
  free(cct);
  return (0);
}
