#include "monty.h"

/**
 * _push - pushes a node to a stack
 * @stack: head of the stack
 * @n: line number
 */
void _push(stack_t **stack, unsigned int n)
{
	stack_t *node = NULL;
	(void) n;

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	node->prev = node->next = NULL;

	if (!(*stack))
		(*stack) = node;
	else
	{
		(*stack)->prev = node;
		node->next = *stack;
		*stack = node;
	}
}

/**
 * _pall - prints a stack
 * @stack: pointer to a stack_t
 * @n: line number
 */
void _pall(stack_t **stack, unsigned int n)
{
	stack_t *node, *head;
	(void) n;

	if (!stack || !(*stack))
		return;
	node = head = *stack;

	while (node)
	{
		fprintf(stdout, "%d\n", node->n);
		node = node->next;
	}
}

