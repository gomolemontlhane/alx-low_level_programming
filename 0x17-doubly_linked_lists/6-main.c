#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *main - Checks the code for Task 6.
 *
 *Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	int sum;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);

	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);

	free_dlistint(head);

	return (EXIT_SUCCESS);
}
