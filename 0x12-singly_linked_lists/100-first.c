#include "lists.h"
#include <stdio.h>

void test(void) __attribute__ ((constructor));

/**
 * test - Entry Point
 * Description: prints quote and has gcc run this function before main)?
 */
void test(void)
{
	printf("You're beat! and yet, you must allow,
\nI bore my house upon my back!\n");
}
