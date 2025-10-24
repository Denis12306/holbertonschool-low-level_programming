#include "main.h"
/*
* main - Check for lowercase character.
*
* Return: Always 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	return (0);
}
