#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void nodes_swap(listint_t **h, listint_t **no1, listint_t *no2);
void quick_sort(int *array, size_t size);
void Lomuto(int *array, size_t size, int low, int high);
int partition(int *array, size_t size, int low, int high);
void swap(int *a, int *b);
void shell_sort(int *array, size_t size);
void swapping(listint_t **head, listint_t *node);
void cocktail_sort_list(listint_t **list);
void siftDown(int *array, size_t size, int start, int end);
void heapify(int *array, size_t size, int count);
void heap_sort(int *array, size_t size);
#endif /*SORT_H*/
