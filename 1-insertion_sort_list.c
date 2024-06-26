#include "sort.h"

/**
 *swap_node - swap a node for his previous one
 *@node: node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Insertion sort algorithm
 * @list: Dobule linked list to sort
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *ptr;

    if (!*list && !(*list)->next)
        return ;
    ptr = (*list)->next;
    while (ptr)
    {
        while ((ptr->prev) && (ptr->prev->n > ptr->n))
		{
			ptr = swap_node(ptr, list);
			print_list(*list);
		}
		ptr = ptr->next;
    }
}
