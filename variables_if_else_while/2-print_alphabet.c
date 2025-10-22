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
	char a = 'a';

      while(a <= 'z')
    {
      putchar("%c"\n, a);
      a++;
   }
    return (0);
}
