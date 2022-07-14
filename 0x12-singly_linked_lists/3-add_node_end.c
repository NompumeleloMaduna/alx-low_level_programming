#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Head of the list
 * @str: New value for the node
 *
 * Return: Return the new node
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

