#include "main.h"
#include <stdio.h>
/**
* more_numbers - print numbers from 0 to 14, 10 times
* @j = numbers of loop and @i = numbers to print
* Return lines each times
* Return: void
*/
void more_numbers(void)
{
	int j = '0';
	int i;

	for (; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
