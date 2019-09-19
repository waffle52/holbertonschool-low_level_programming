#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates random num to check
(* a blank line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) > 5)
{
printf("Last digit of %i is %i and greater than 5\n", n, n % 10);
}
else if ((n % 10) == 0)
{
printf("Last digit of %i is %i and is 0\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 6)
{
printf("Last digit of %i is %i and less than 6 and not 0\n", n, n % 10);
}

return (0);
}
