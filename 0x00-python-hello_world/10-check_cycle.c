#include "lists.h"

/**
 * check_cycle - checkes if linked list contain cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has cycle, 0 if not
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);

	}
<<<<<<< HEAD
=======

>>>>>>> eb2640daa492a04d56b33ba5cda875ce15bda702
	return (0);
}
