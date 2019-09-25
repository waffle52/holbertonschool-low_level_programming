#include "holberton.h"

/**
 * times_table - Entry point
 * Description: prints tables by 9)?
 * Return: numbers 9 * var.
 */


void times_table(void)
{
	int num;
	int x;
	int y;

	for(y = 0; y <= 9; y++){
		for(x = 0; x <= 9; x++){
			num = x * y;

			if(num < 10 && x != 0){
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else if (num >= 10){
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			} else {
				_putchar(num + '0');
			}

			if( x != 9){
				_putchar(',');
			}

		}
		_putchar('\n');
	}


}
