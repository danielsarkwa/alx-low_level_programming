#include <stdio.h>
int main(void)
/**
 * main - a simple program that prints size of various types of computer it is complied on
 * Return - outputs digits
 */
{
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
