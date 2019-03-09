/*
Написати програму  в якій дано  динамічний одновимірний масив даних  розмірністю 20 елементів заповненого випадковими числами в діапазоні [-12..56]: 
Після кожного відємного елемента вставити його модуль 
Видалити всі парні елементи масиву 
*/

#include <iostream>
#include <ctime>

void fillarr(int *arr, int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		*(arr + i) = rand() % 56 + (-12);
	}
}
void printarr(int *arr, int const SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout<<*(arr + i)<<" ";
	}
	std::cout << std::endl;
}
int* modul(int *arr, int *SIZE)
{
	int buf = 0;
	for (int i = 0; i < *SIZE; i++)
	{
		if (*(arr + i) < 0)
		{
			buf++;
		}
	}
	*SIZE += buf;
	int *arrbuf = new int[*SIZE];
	int iter = 0;
	for (int i = 0; i < *SIZE;)
	{
		if (*(arr + iter) < 0)
		{
			*(arrbuf + i) = *(arr + iter);
			i++;
			*(arrbuf + i) = abs(*(arr + iter));
			i++;
			iter++;
			continue;
		}
		*(arrbuf + i) = *(arr + iter);
		iter++;
		i++;
	}
	delete[] arr;
	return arrbuf;
}
int * delParVar(int *arr, int &SIZE)
{
	int tmpind = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i]%2==0)
		{
			tmpind++;
		}
	}
	int index = 0;
	int *arrbuf = new int[SIZE-tmpind];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] % 2 != 0)
		{
			arrbuf[index] = arr[i];
			index++;
		}
	}
	SIZE -= tmpind;
	delete[] arr;
	return arrbuf;
}
int main()
{
	srand(unsigned(time(NULL)));
	int SIZE = 20;
	int *arr = new int[SIZE];
	//std::cout << abs(-5) << "\n";
	fillarr(arr, SIZE);
	std::cout << "ORIGINAL=> ";
	printarr(arr, SIZE);
	std::cout << "\n";
	arr = modul(arr, &SIZE);
	std::cout << "MODUL=> ";
	printarr(arr, SIZE);
	std::cout << "\n";
	arr = delParVar(arr,SIZE);
	std::cout << "DELETEPAR=> ";
	printarr(arr, SIZE);
	std::cout << "\n";
	system("pause");
	return 0;
}