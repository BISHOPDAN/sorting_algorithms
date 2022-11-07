#include "sort.h"
/**
 * bubble_sort - sort an array using the bubble sort
 * @array - an array to be sorted
 * @size - size of the array
 * Return - on sucess return 0 or 1
 */
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 -i; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				print_array(array, size);
			}

		}
	}
}
