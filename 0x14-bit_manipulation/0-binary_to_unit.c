#include "main.h"
/**
 * binary_to_unit - function that converts binary to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_unit(const char *b)
{
	int i;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_value = 2 * decimal_value +(b[i] - '0');
	}

	return (decimal_value);
}
