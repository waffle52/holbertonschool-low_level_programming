#include "stdio.h"

/**
 * main - prints out types by size
(* a blank line
 * Description: main function prints various size types)?
(* section header: Standard input and output header)*
 * Return: 0 to exit program
 */

int main(void)
{

printf("Size of a char: %ld byte\(s)\n", sizeof(char));
printf("Size of an int: %ld byte\(s)\n", sizeof(int));
printf("Size of long int: %ld byte\(s)\n", sizeof(long int));
printf("Size of a long long int: %ld byte\(s)\n", sizeof(long long int));
printf("Size of a float: %ld byte\(s)\n", sizeof(float));

return (0);
}
