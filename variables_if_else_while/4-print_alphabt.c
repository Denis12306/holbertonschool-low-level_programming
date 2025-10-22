#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if(alphabet != 'q' && alphabet != 'e')

		putchar(alphabet);

		alphabet++;
	}
}

putchar('\n');

	return (0);
}
