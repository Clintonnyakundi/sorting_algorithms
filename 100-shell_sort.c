#include "sort.h"
/**
  *shell_sort - sort array using shell_sort with knuth sequence
  *@array: array to be sorted
  *@size: size of array
  *
  *Return: void
  */
void shell_sort(int *array, size_t size)
{
	int temp;
	size_t interval = 1, i, j;

	if (array == NULL || size < 2)
		return;

	while (interval <= size / 3)
		interval = interval * 3 + 1;

	while (interval > 0)
	{
		for (i = interval; i < size; i += 1)
		{
			temp = array[i];

			for (j = i; j >= interval && array[j - interval] >= temp;
				j -= interval)
				array[j] = array[j - interval];

			array[j] = temp;
		}
		interval = (interval - 1) / 3;
		print_array(array, size);
	}
}
