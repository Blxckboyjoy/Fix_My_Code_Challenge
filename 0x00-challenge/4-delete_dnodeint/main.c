#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head = NULL;
	int nums[] = {0, 1, 2, 3, 4, 98, 402, 1024};
	int num_count = sizeof(nums) / sizeof(nums[0]);
	int i;

	for (i = 0; i < num_count; i++)
		add_dnodeint_end(&head, nums[i]);

	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 5);
	delete_dnodeint_at_index(&head, 0);
	delete_dnodeint_at_index(&head, 0);

	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	delete_dnodeint_at_index(&head, 0);
	delete_dnodeint_at_index(&head, 0);

	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	delete_dnodeint_at_index(&head, 0);
	delete_dnodeint_at_index(&head, 0);

	print_dlistint(head);
	printf("-----------------\n");

	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);

	free_dlistint(head);

	return (EXIT_SUCCESS);
}