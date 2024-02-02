#ifndef _LIST_H_
#define _LIST_H_

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
#endif
