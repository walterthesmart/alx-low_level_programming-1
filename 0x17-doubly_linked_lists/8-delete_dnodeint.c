#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *temp = *head;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return (1);
    }

    while (i < index - 1)
    {
        if (temp == NULL)
            return (-1);
        temp = temp->next;
        i++;
    }

    if (temp == NULL || temp->next == NULL)
        return (-1);

    current = temp->next->next;
    free(temp->next);
    temp->next = current;

    if (current != NULL)
        current->prev = temp;

    return (1);
}

