#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @r: The integer to check
 *
 * Return: The absolute value of the integer
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	return (0);
}
