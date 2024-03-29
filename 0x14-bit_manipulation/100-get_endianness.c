#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	return (5 << 8 == 0 ? 0 : 1);
}
