#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

/**
*swap -> will swap two elmts
*@xp:parameter 3
*@yp:parameter 4
*
*Return: swap
*/
/**
*bubble_sort - > will sort the list
*@array: parameter 1
*@size: parameter 2
*Return: sort list
*/
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}
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
