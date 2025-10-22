#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	while(alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
