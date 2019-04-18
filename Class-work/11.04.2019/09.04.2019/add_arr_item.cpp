#include <iostream>
#include <ctime>
#include "Arrs.h"

int* add_arr_item(int *&p_arr, unsigned short &size)
{
	size++;
	p_arr = (int *)realloc(p_arr, size * sizeof(int));
	p_arr[size-1] = rand() % 100 + 1;
	return p_arr;
}