#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main
(* a blank line
 * Program generates randon number and checks type)?
(* stdlib.h, time.h, stdio.h)*
 * Return: 0 to exit file
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
else
{
printf("%i is zero\n", n);
}

return (0);
}
