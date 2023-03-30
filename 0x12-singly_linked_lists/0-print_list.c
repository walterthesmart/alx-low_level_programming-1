#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
README.md int count = 0;

README.md while (h)
README.md {
README.md README.md if (h->str == NULL)
README.md README.md {
README.md README.md README.md printf("[0] (nil)\n");
README.md README.md }
README.md README.md else
README.md README.md {
README.md README.md printf("[%d] %s\n", h->len, h->str);
README.md README.md }
README.md README.md count++;
README.md README.md h = h->next;
README.md }
README.md return (count);
}
