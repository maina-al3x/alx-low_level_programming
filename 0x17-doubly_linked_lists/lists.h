#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - doubly linked lists
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int;
	struct dlistint_s *prev;
	struct dlistint_ *next;
} dlistint_t;

size_t print_dlistint(const dlist_t *h);
size_t dlistint_len(const dlist_t *h);
dlist_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
#endif
