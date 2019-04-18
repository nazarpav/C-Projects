#include <iostream>
#include <ctime>
#include "Arrs.h"

int* del_arr_item(int *&p_arr, unsigned short &size)
{
	size--;
	p_arr = (int *)realloc(p_arr, size * sizeof(int));
	return p_arr;
}