/*C++ 
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами. Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню */
#include<iostream>
#include<ctime>

template<typename T, typename T2>
void Print(T arr[], T2 size);
template<typename T, typename T2>
void Fill(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100+1;
	}
}
template<typename T, typename T2,typename T3>
int * arrplus(T arr[], T2 &SIZE, T3 value)
{
	short index = 0;
	int *arrbuf = new int[SIZE + 1];
	for (index = 0; index < SIZE; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	*(arrbuf + index) = value;
	Print(arrbuf, SIZE+1);
	SIZE++;
	return arrbuf;
}
template<typename T, typename T2>
void arrminus(T arr[], T2 index)
{
	*(arr + index) = 0;
}
template<typename T, typename T2>
void Print(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		std::cout << "arr [" << i << "]=" << *(arr+i) << "\t\t";
		std::cout << " Address = " << arr + i << std::endl;
	}
	std::cout << std::endl;
}
int main()
{
	srand(unsigned(time(NULL)));
	int SIZE = 0;
	int value = 0,index=0;
	int var = 0;
	std::cout << "Enter SIZE arr:: ";
	std::cin >> SIZE;
	int *arr = new int[SIZE];
	Fill(arr, SIZE);
	while (true)
	{
		system("cls");
		Print(arr, SIZE);
		std::cout << "1 -  plusarr\n2 - arrindex = 0\n3 - exit\n::";
		std::cin >> var;
		if (var == 1)
		{
			std::cout << "Enter value + arr ::";
		std::cin >> value;
		arr = arrplus(arr, SIZE, value);
	}
		else if (var == 2)
		{
			std::cout << "Enter del index::";
		std::cin >> index;
		arrminus(arr, index);
		Print(arr, SIZE);
	}
		else if (var == 3)
		{
			break;
		}
		else { std::cout << "eror!\n"; }
	}
	system("pause");
	return 0;
}