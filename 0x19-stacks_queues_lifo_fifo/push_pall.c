#include "monty.h"

/**
 *push -  pushes an element to the stack.
 *@element: is the element to be pushed.
 *@head: is the position.
 *Return: the new added element.
 */

void push(stack_t **position, unsigned int element)
{
	/*char *new;

	if (element == NULL || element == "")
	{
		prinf("L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(char));
	if (new == NULL)
		return (NULL);
	new->element = element;
	new->prev = NULL;
	if (*position == NULL)
	{
		*position = new;
		return (*position);
	}
	new->next = *position;
	(*position)->prev = new;
	*position = new;
	return (*position);*/
	(void)element;
	(void)position;
	printf("hi\n");
}
/**
 *pop - prints all the values on the stack.
 *@list: is the stack to be printed
 *Return: the elements of the stack.
 */
void pall(stack_t **position, unsigned int element)
{
	/*unsigned int elements = 0;
	const  int stack = list;

	if (stack == "")
		return (0);
	while (stack)
	{
		printf("%d\n", node->list);
		stack = stack->next;
		elements++;
	}
	return (elements);*/
	(void)position;
	(void)element;
}
