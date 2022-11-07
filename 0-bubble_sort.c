#include "sort.h"

/**
*swap - swaps two integers in an array
*@xp:first int
*@yp:second int
*Return:void
*/
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
/**
*bubble_sort - sorts a list using the bubble sort algorithm
*@array:pointer to array
*@size:size of array
*Return:void
*/
void bubble_sort(int *array, size_t size)
{
	int new_size = size;
	bool swapped;

	while (new_size >= 0)
	{
	swapped = false;
	for (int i = 0; i < size - 1; i++)
	{
	if (array[i] > array[i + 1])
	{
	swap(&array[i + 1], &array[i]);
	print_array(array, size);
	swapped = true;
}
}
	if (swapped == false)
	break;
	new_size -= 1;
	}
}
