#include <stdlib.h>
#include <time.h>
/*
* main -n the last digit
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int der;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	der = n % 10;
	if (der > 5)
	{
		printf("der of %d and is greater than 5\n", n, der);
	}
	else if (der = 0)
	{
		printf("der of %d der is 0\n", n, der);
	}
	else (der < 6)(der ! 0)
	{
		printf("der of %d is %d and is less than than 6 ans not 0\n", n, der);
	}
	return (0);
}
