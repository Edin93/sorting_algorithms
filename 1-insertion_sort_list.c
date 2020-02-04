#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm.
 * @list: linked list to sort.
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *idx, *tmp, *shift;

	if (list != NULL && *list != NULL && (*list)->next != NULL)
	{
		for (cur = (*list)->next; cur != NULL; cur = cur->next)
		{
			idx = cur->prev;
			while (idx != NULL)
			{
				shift = idx->next;
				if (shift->n < idx->n)
				{
					tmp = shift->next;
					if (tmp != NULL)
						tmp->prev = idx;
					idx->next = tmp;
					if (idx->prev != NULL)
						idx->prev->next = shift;
					shift->next = idx;
					shift->prev = idx->prev;
					idx->prev = shift;
					idx = shift;
					if (idx->prev == NULL)
						*list = idx;
					print_list(*list);
				}
				else
					idx = idx->prev;
			}
			if (cur->next == NULL)
				*list = cur;
		}
		while ((*list)->prev != NULL)
			*list = (*list)->prev;
	}
}
