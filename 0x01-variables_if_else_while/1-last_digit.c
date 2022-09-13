#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: 0 (Successful)
 */
int main(void)
{
int n;
int nlast;

srand(time(0));
n = rand() - RAND_MAX / 2;
nlast = n % 10;

if (n > 5)
	printf("last digit %d is %d  greater than 5\n", n, nlast);
else if (n == 0)
	printf("last digit %d is %d equals 0\n", n, nlast);
else
	printf("last digit %d is %d less than 6 and not 0\n", n, nlast);
