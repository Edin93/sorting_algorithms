#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm.
 * @list: linked list to sort.
 * Return: nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *h = *list, *f = *list, *tmp;
	int x;

	h = h->next;
	while (!h)
	{
		f = h->prev;
		while (!f)
		{
			x = f->n;
			if (x > h->n)
			{
				tmp = h->next;
				f->next = tmp;
				f->prev->next = h;
				tmp->prev = f;
				h->next = f;
				h->prev = f->prev;
				f->prev = h;
			}
			f = f->prev;
		}
		h = h->next;
	}
}
