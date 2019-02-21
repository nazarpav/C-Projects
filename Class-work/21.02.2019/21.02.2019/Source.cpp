/*28.	Знайти якесь число в масиві і повернути вказівник на нього. Вивести індекс цьго елементу (элемкнт вводиться з клавіатури)*/
#include <iostream>
#include<ctime>
void fillarr(int arr[], const int SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

}void printarrind(int arr[], const int SIZE,int index = 0)
{
	std::cout <<"adres - "<< (arr + index)<<std::endl;
	std::cout << "value - "<<*(arr + index)<<std::endl;
}


void printarr(int arr[], const int SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		std::cout << *(arr+i)<<" ";
	}
	std::cout << std::endl;
}

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE]{};
	int index = 0;
	fillarr(arr, SIZE);
	std::cout << "enter index\n";
	std::cin >> index;
	printarr(arr, SIZE);
	printarrind(arr, SIZE,index);
	
	system("pause");
	return 0;
}

/*Створити 3 динамічних змінних різного типу. Заповнити їх деякими значеннями.
Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних */
//#include <iostream>
//#include<ctime>
//
//class clas
//{
//public:
//
//	float foo(int *a,short *b,float *c)
//	{
//
//		return *a**b**c;
//	}
//	void print(int *a, short *b, float *c)
//	{
//		std::cout << "a="<<*a << " b="<<*b << " c=" << *c<<std::endl;
//	}
//};
//
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int *a = new int;
//	short*b = new short;
//	float *c = new float;
//
//	std::cout << "enter num\n";
//	std::cin >> *a >> *b >> *c;
//	clas test;
//	std::cout<<test.foo(a,b,c)<<std::endl;
//	test.print(a, b, c);
//	delete *a;
//	delete *b;
//	delete *c;
//
//	system("pause");
//	return 0;
//}


/*C++
Дано два масива : .Утворити третій масив мінімального можливого розміру, у якому зібрати :
Елементи обох масивів;
Спільні элементи обох массивов;
Елементи масиву A, які не зустрічаються у B;
Елементи масиву В, які не зустрічаються у А;
Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).*/

//#include <iostream>
//#include<ctime>
//void fillarr(int arr1[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr1[i] = rand() % 100 + 1;
//	}
//
//}
//
//void spilni(int arr1[], int arr2[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		for (short j = 0; j < SIZE; j++)
//		{
//			if (arr1[i] == arr2[j])
//			{
//				std::cout << arr1[i] << " = " << arr2[j]<<std::endl;
//			}
//		}
//	}
//}
//void printAnotB(int arr1[], int arr2[], const int SIZE)
//{
//	bool var = false;
//	for (int i = 0; i < SIZE; i++)
//	{
//		var = false;
//		for (int j = 0; j < SIZE; j++)
//		{
//			if (var)
//			{
//				break;
//			}
//			var = (arr1[i] == arr2[j]);
//		}
//		if (!var)
//		{
//			std::cout << "\nA NOT IN B-> " << arr1[i];
//		}
//	}
//	std::cout << std::endl;
//}
//void printBnotA(int arr1[], int arr2[], const int SIZE)
//{
//	bool var = false;
//	for (int i = 0; i < SIZE; i++)
//	{
//		var = false;
//		for (int j = 0; j < SIZE; j++)
//		{
//			if (var)
//			{
//				break;
//			}
//			var = (arr1[j] == arr2[i]);
//		}
//		if (!var)
//		{
//			std::cout << "\nB NOT IN A-> " << arr2[i];
//		}
//	}
//	std::cout << std::endl;
//}
//void elementarr(int arr[],int arr1[],int arr2[], const int SIZE)
//{
//	int index = 0;
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[index] = arr1[i];
//		index++;
//	}
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[index] = arr2[i];
//		index++;
//	}
//}
//void printarr(int arr1[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		std::cout << *(arr1+i)<<" ";
//	}
//	std::cout << std::endl;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	const int SIZE = 10;
//	int arr1[SIZE]{};
//	int arr2[SIZE]{};
//	int arr3[SIZE * 2]{};
//
//	fillarr(arr1, SIZE);
//	fillarr(arr2, SIZE);
//	printarr(arr1, SIZE);
//	printarr(arr2, SIZE);
//	spilni(arr1, arr2, SIZE);
//	elementarr(arr3, arr1, arr2, SIZE);
//	printarr(arr3, SIZE*2);
//	printAnotB(arr1, arr2,SIZE);
//	printBnotA(arr1, arr2, SIZE);
//	system("pause");
//	return 0;
//}