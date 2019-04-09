#include <iostream>
#include <ctime>
#include "Arrs.h"

int* del_arr_item(int *&p_arr, unsigned short &size)
{
	size--;
	int *new_p_arr = new int[size];
	for (unsigned short i = 0; i < size; i++)
	{
		new_p_arr[i] = p_arr[i];
	}
	delete[] p_arr;
	return new_p_arr;
}