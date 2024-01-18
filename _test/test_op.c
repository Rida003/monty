#include "monty.h"

int main(void)
{
	stack_t *stack;

	instruction_t ops[] = {{"push", push},
				{"pall", pall},
				{NULL, NULL}};

	stack = NULL;

	ops[0].f(&stack, 1);

	ops[0].f(&stack, 1);
	ops[0].f(&stack, 1);
	ops[0].f(&stack, 1);
	ops[0].f(&stack, 1);
	ops[0].f(&stack, 1);

	ops[1].f(&stack, 0);


	return(0);
}
