#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int nLast;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

nLast = n % 10;


if (nLast > 5);

{
	printf("the last digit of %d is %d and is greater than 5\n", n, nLast)
}

else if (nLast < 6 && nLast != 0)
{
	printf("last digit of %d is %d and is less thatn 6 and not 0\n", n, nLast)
}
else

{
	printf("last digit of %d is %d and is 0", n, nLast)
}
return (0);
}
