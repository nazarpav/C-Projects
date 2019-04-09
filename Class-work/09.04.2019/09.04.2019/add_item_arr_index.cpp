#include <iostream>
#include <ctime>
#include "Arrs.h"

int* add_arr_item_ind(int *&p_arr, unsigned short &size,unsigned short index)
{
	int *new_p_arr = new int[size + 1];
	unsigned short indexx = 0;
	size++;
	for (unsigned short i = 0; i < size; i++)
	{
		if (i == index)
		{
			new_p_arr[i] = rand() % 100 + 1;
			continue;
		}
		new_p_arr[i] = p_arr[indexx];
		indexx++;
	}
	delete[] p_arr;
	return new_p_arr;
}