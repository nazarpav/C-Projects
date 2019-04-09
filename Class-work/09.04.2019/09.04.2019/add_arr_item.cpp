#include <iostream>
#include <ctime>
#include "Arrs.h"

int* add_arr_item(int *&p_arr, unsigned short &size)
{
	int *new_p_arr = new int[size+1];
	for (unsigned short i = 0; i < size; i++)
	{
		new_p_arr[i] = p_arr[i];
	}
	new_p_arr[size] = rand() % 100 + 1;
	size++;
	delete[] p_arr;
	return new_p_arr;
}