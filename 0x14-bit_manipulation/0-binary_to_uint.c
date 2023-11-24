#include "main.h"

/**
 * binary_to_init - converts a binary number strig to unsigned int 
 * @b: the binary number as a string 
 *
 * Return: the insigned int from of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	if (!b)
		return (0);
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
