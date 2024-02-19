#ifndef LIST_H_
#define LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct list_s - singly linked lsit
 * @len: lenght of the string
 * @next: pointer 
 * @str: string
 */
size_t print_list(const list_t *h);

typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
}
list_t;
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
