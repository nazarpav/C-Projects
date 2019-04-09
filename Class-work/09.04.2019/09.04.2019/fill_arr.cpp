#include <iostream>
#include <ctime>
#include "Arrs.h"
using namespace std;

void fill_arr(int *&p_arr, unsigned short size)
{
	for (unsigned short i = 0; i < size; i++)
	{
		p_arr[i] = rand() % 100 + 1;
	}
}