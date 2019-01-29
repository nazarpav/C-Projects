#include <iostream>
#include <ctime>
using namespace std;

short index = 0,buf1=0,buf2=0;
const short SIZE = 8;

void fillarr (int arr[], const short SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 40+(-20);
	}
}

void printarr(int arr[], const short SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout << endl;
}


void left (int arr[], const short SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			index = i;
			buf1 =arr[i];
			break;
		}
	}
}
void right(int arr[], const short SIZE)
{
	for (int i = SIZE; i > 0; i--)
	{
		if (arr[i] < 0)
		{
			index = i;
			buf2 = arr[i];
			break;
		}
	}
}

int main()
{
	srand(unsigned(time(NULL)));

	//const short SIZE = 8;
	int arr[SIZE];
	//short buf1 = 0,buf2;
	fillarr(arr,SIZE);
	printarr(arr,SIZE);
	left(arr, SIZE);
	right(arr, SIZE);
	//buf1 = right(arr, SIZE);
	//buf2 = left(arr, SIZE);
	arr[index] = buf2;
	arr[index] = buf1;
	printarr(arr, SIZE);
	

	system("pause");
	return 0;
}

