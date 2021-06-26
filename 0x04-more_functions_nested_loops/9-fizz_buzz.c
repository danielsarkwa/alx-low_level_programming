#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (c = 1; c <= 100; c++)
{
if (c == 100)
{
printf("%s", b);
}
else if (c % 3 == 0 && c % 5 == 0)
{
printf("%s ", fb);
}
else if (c % 3 == 0)
{
printf("%s ", f);
}
else if (c % 5 == 0)
{
printf("%s ", b);
}
else
printf("%d ", c);
}
printf("\n");
return (0);
}
