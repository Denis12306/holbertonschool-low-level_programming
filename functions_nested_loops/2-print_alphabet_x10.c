#include "main.h"
/*
* main - Print alphabet minus x10.
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int j = '0';
        int i;
	for (; j <= '9'; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		 	_putchar(i);
		}
		_putchar('\n');
	}
}
