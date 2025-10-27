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
	int i, j = 0;

	for (; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
