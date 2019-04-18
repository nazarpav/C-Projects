#include <iostream>
#include "Arrs.h"
using namespace std;

void print_arr(int *&p_arr, unsigned short size)
{
	for (unsigned short i = 0; i < size; i++)
	{
		cout<<p_arr[i]<<" ";
	}
	cout << endl;
}