#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Entry Point
 * @name: String name to pass
 * @f: pointer to function to pass string with
 * Description: passes string to function to print)?
 */

void print_name(char *name, void(*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
