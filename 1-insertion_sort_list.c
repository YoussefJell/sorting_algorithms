#include "sort.h"
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	tmp = *list;

	while (tmp->next)
	{
		if (tmp->n > tmp->next->n)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;

			tmp->prev = tmp->next;
			tmp->next = tmp->next->next;
			tmp->prev->next = tmp;
			if (tmp->next)
				tmp->next->prev = tmp;

			tmp = tmp->prev;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
