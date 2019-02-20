/*1. Написати функцію, яка замінює всі від’ємні елементи переданого масиву нулями.Примітка!Функція повинна повертати ссилку на відємний елемент*/
//#include <iostream>
//#include<ctime>
//void fillarr(int arr[], const int &SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 10 + (-5);
//	}
//}
//
//void opArr(int arr[], const int &SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		if (*(arr + i) < 0)
//		{
//			std::cout <<"--------------------------------->"<< *(arr + i) << " < 0\n";
//			*(arr + i) = 0;
//		}
//	}
//}
//
//void printarr(int arr[], const int &SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		std::cout << *(arr+i)<<" ";
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int SIZE = 10;
//	int arr[SIZE]{};
//
//	fillarr(arr, SIZE);
//	printarr(arr, SIZE);
//	opArr(arr, SIZE);
//	printarr(arr, SIZE);
//
//	system("pause");
//	return 0;
//}

/*2. Написати функцію(або шаблон), яка приймає дві ссилки на змінні і виконує обмін значень.
За допомогою написаної функції поміняти місцями у матриці перший та другий стовпці.*/

#include <iostream>
#include<ctime>
void fillarr(int(&arr)[][], const int &SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		for (short j = 0; j < SIZE; j++)
		{
			arr[i][j] = rand() % 10 + (-5);
		}
	}
}

void opArr(int (&arr)[][], const int &SIZE,int x1=0,int y1=0, int x2 = 0, int y2 = 0)
{
	int bufvar = 0;
	bufvar = arr[x1][y1];
	arr[x1][y1]=arr[x2][y2];
	arr[x2][y2]=bufvar;
	
	int arrbuf[SIZE];
	for (short i = 0; i < SIZE; i++)
	{
			arrbuf[i]=arr[i][0];
			arr[i][0] = arr[i][1];
			arr[i][1] = arrbuf[i];
	}
}

void printarr(int(&arr)[][], const int &SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		for (short j = 0; j < SIZE; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	srand(unsigned(time(NULL)));

	const int SIZE = 10;
	int arr[SIZE]{};
	int x1 = 0,y1 = 0, x2 = 0, y2 = 0;
	std::cout << "enter x1-> ";
	std::cin >> x1;
	std::cout << "enter y1-> ";
	std::cin >> y1;
	std::cout << "enter x2-> ";
	std::cin >> x2;
	std::cout << "enter y2-> ";
	std::cin >> y2;
	fillarr(arr, SIZE);
	printarr(arr, SIZE);
	opArr(arr, SIZE, x1, y1, x2, y2);
	printarr(arr, SIZE);

	system("pause");
	return 0;
}




/*3. Написати функцію, яка отримує одновимірний масив і повертає ссилку на найменший елемент масиву.
За допомогою цієї функції вивести на екран найменший елемент та подвоїти найменший елемент масиву*/

//#include <iostream>
//#include<ctime>
//void fillarr(int arr[], const int &SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 100 + 1;
//	}
//}
//
//void opArr(int arr[], const int &SIZE)
//{
//	int bufmin = 11000000,index=0;
//	for (short i = 0; i < SIZE; i++)
//	{
//		if (bufmin>*(arr+i))
//		{
//			bufmin = *(arr + i);
//			index = i;
//		}
//	}
//	std::cout << "a minimum alement in array is - " << bufmin<<std::endl;
//	*(arr + index) *= 2;
//}
//
//void printarr(int arr[], const int &SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		std::cout << *(arr + i) << " ";
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int SIZE = 10;
//	int arr[SIZE]{};
//
//	fillarr(arr, SIZE);
//	printarr(arr, SIZE);
//	opArr(arr, SIZE);
//	printarr(arr, SIZE);
//
//	system("pause");
//	return 0;
//}