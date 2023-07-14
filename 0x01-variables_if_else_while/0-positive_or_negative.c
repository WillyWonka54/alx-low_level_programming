#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%i is positive\n", n);
	else if (n == 0)
		print("%i is zero\n", n);
	else if (n < 0)
		print("%i is negative\n", n);
	return (0);
}
