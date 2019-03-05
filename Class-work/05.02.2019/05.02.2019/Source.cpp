/*Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
Виводу масиву 
Доповнення масиву одним елементом в кінець масиву. 
Доповнення масиву одним елементом в початокмасиву.    
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню */
#include<iostream>
#include<ctime>


void Print(int arr[], int size);

void Fill(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
}
int * arrplus(int arr[], int &SIZE, int value,int indexx)
{
	short index = 0;
	int *arrbuf = new int[SIZE+1];
	for (; index < indexx; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	*(arrbuf + index) = value;
	index++;
	for (; index < SIZE+1; index++)
	{
		*(arrbuf + index) = *(arr + index-1);
	}
	Print(arrbuf, SIZE + 1);
	SIZE++;
	delete[]arr;
	arr = arrbuf;
	return arrbuf;
}
int * arrplusend(int arr[], int &SIZE, int value)
{
	short index = 0;
	int *arrbuf = new int[SIZE + 1];
	for (index = 0; index < SIZE; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	*(arrbuf + index) = value;
	Print(arrbuf, SIZE + 1);
	SIZE++;
	delete[]arr;
	arr = arrbuf;
	return arrbuf;
}
int * arrplusfront(int arr[], int &SIZE, int value)
{
	short index = 0;
	int *arrbuf = new int[SIZE + 1];
	*(arrbuf + index) = value;
	index++;
	for (; index < SIZE+1; index++)
	{
		*(arrbuf + index) = *(arr + (index-1));
	}
	SIZE++;
	Print(arrbuf, SIZE + 1);
	
	delete[]arr;
	arr = arrbuf;
	return arrbuf;
}

int * arrminus(int arr[], int &SIZE, int value, int indexx)
{
	short index = 0;
	int *arrbuf = new int[SIZE-1];
	for (; index < indexx; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	for (; index < SIZE -1; index++)
	{
		*(arrbuf + index) = *(arr + index+1);
	}
	Print(arrbuf, SIZE-1 );
	SIZE--;
	delete[]arr;
	arr = arrbuf;
	return arrbuf;
}
void Print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "arr [" << i << "]=" << *(arr + i) << "\t\t";
		std::cout << " Address = " << arr + i << std::endl;
	}
	std::cout << std::endl;
}
int main()
{
	srand(unsigned(time(NULL)));
	int SIZE = 0;
	int value = 0, index = 0;
	int var = 0;
	std::cout << "Enter SIZE arr:: ";
	std::cin >> SIZE;
	int *arr = new int[SIZE];
	Fill(arr, SIZE);
	while (true)
	{
		system("cls");
		Print(arr, SIZE);
		std::cout << "0 - plusarrfront\n1 -  plusarrend\n2 - arr minus\n3 - arrplus in the your index\n4 - exit\n::";
		std::cin >> var;
		if (var == 1)
		{
			std::cout << "Enter value + arr ::";
			std::cin >> value;
			arr = arrplusend(arr, SIZE, value);
		}
		else if (var == 2)
		{
			int indexxx = 0;
			std::cout << "Enter index ::";
			std::cin >> indexxx;
			arr=arrminus(arr, SIZE, value, indexxx);
			Print(arr, SIZE);
		}
		else if (var == 0)
		{
			std::cout << "Enter value + arr ::";
			std::cin >> value;
			arr = arrplusfront(arr, SIZE, value);
		}
		else if (var == 3)
		{
			int indexx = 0;
			std::cout << "Enter value + arr ::";
			std::cin >> value;
			std::cout << "Enter index ::";
			std::cin >> indexx;
			arr = arrplus(arr, SIZE, value,indexx);
		}
		else if (var == 4)
		{
			break;
		}
		else { std::cout << "eror!\n"; }
	}
	system("pause");
	return 0;
}