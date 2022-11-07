#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(int *xp, int *yp);

#endif /* MAIN_H */
