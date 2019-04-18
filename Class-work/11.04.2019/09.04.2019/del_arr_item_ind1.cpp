#include <iostream>
#include <ctime>
#include "Arrs.h"

int* del_arr_item_ind(int *&p_arr, unsigned short &size, unsigned short index)
{
	size--;
	int* new_p_arr = nullptr;
	new_p_arr = (int *)realloc(new_p_arr, size * sizeof(int));
	unsigned short indexx = 0;
	for (unsigned short i = 0; i < size+1; i++)
	{
		if (i == index)
		{
			continue;
		}
		new_p_arr[indexx] = p_arr[i];
		indexx++;
	}
	delete[] p_arr;
	return new_p_arr;
}