#ifndef _LISTS_H_
#define _LISTS_H_


#include <stdlib.h>
#include <stdio.h>
/**
 * struct listint_t - self refrencial struct
 * @n: integer
 * @next: pointer to the next node
 */
typedef struct listint_s
{
	int n;
        struct listint_s *next;	



} listint_t;

size_t listint_len(const listint_t *h);


#endif
