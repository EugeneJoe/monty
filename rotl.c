#include "monty.h"

/**
 * rotl_stack - rotates the stack to top
 * @head: double pointer to head node of stack
 * @line_number: line number of instruction in file being read
 *
 * Description: Top stack element becomes last, 2nd top element becomes 1st
 *
 * Return: no return value (void)
 */
void rotl_stack(stack_t **head, unsigned int line_number)
{
	int_arg = (*head)->n;
	pop_stack(head, line_number);
	push_queue(head, line_number);
}
