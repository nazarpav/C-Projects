/*1.	Дано цілочисельний одновимірний масив.
Заповнити його, вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників*/
//#include <iostream>
//#include<ctime>
//void fillarr(int arr[], const int *SIZE)
//{
//	for (short i = 0; i < *SIZE; i++)
//	{
//		arr[i] = rand() % 10 + 1;;
//	}
//}
//int printarr(int arr[], const int *SIZE)
//{
//	int sum = 0;
//	int *psum = &sum;
//	for (short i = 0; i < *SIZE; i++)
//	{
//		std::cout << *(arr + i) << " ";
//	}
//	std::cout << std::endl;
//	for (short i = *SIZE - 1; i >= 0; i--)
//	{
//		std::cout << *(arr+i) << " ";
//		*psum += *(arr + i);
//	}
//	std::cout << std::endl;
//	return *psum;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int SIZE = 10;
//	int arr[SIZE]{};
//
//	fillarr(arr, &SIZE);
//	std::cout << "sum arr - " << printarr(arr, &SIZE) << std::endl;;
//
//	system("pause");
//	return 0;
//}


/*2.	Дано одновимірний масив. Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями. Вивести перетворений масив на екран з використанням вказівників.*/

//#include <iostream>
//#include<ctime>
//void fillArr(int arr[], const int *SIZE)
//{
//	for (short i = 0; i < *SIZE; i++)
//	{
//		*(arr + i) = rand() % 1000 + 1;
//	}
//}
//
//void opArr(int arr[], const int *SIZE)
//{
//	int bufMin = 1000000, bufMax = 0, indMax = 0, indMin = 0, buf = 0;
//
//	for (short i = 0; i < *SIZE; i++)
//	{
//		if (*(arr + i) < bufMin)
//		{
//			bufMin = *(arr + i);
//			indMin = i;
//		}
//		if (*(arr + i) > bufMax)
//		{
//			bufMax = *(arr + i);
//			indMax = i;
//		}
//	}
//	std::cout << "min " << bufMin << "\n max " << bufMax << std::endl;
//	buf = *(arr + indMin);
//	*(arr + indMin)=*(arr + indMax);
//	*(arr + indMax)= buf;
//}
//
//void printArr(int arr[], const int *SIZE)
//{
//	for (short i = 0; i < *SIZE; i++)
//	{
//		std::cout << *(arr + i) << " ";
//	}
//	std::cout << std::endl;
//
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int SIZE = 10;
//	int arr[SIZE]{};
//
//	fillArr(arr, &SIZE);
//	printArr(arr, &SIZE);
//	opArr(arr, &SIZE);
//	printArr(arr, &SIZE);
//	
//	system("pause");
//	return 0;
//}

/*3.	Дано одновимірний масив. Поміняти місцями дві його половини(якщо масив має непарну довжину, то центральний елемент залишається на місці з використанням вказівників*/

#include <iostream>
#include<ctime>
void fillArr(int arr[], const int *SIZE)
{
	for (short i = 0; i < *SIZE; i++)
	{
		*(arr + i) = rand() % 1000 + 1;
	}
}

void opArr(int arr[], const int *SIZE)
{
	//const int SIZEE = *SIZE;/*не робит:(*/
	//int arrbuf[SIZEE]; /*не робит:((не так то просто обмануть компілятор*/
	//int arrbuf[*SIZE]{}; /*і так тоже:(((*/
	int arrbuf[11]{};
	int iterator = 0;
	if (*SIZE % 2 == 0)
	{
		for (short i = *SIZE/2; i < *SIZE; i++)
		{
			*(arrbuf + iterator) = *(arr + i);
			iterator++;
		}
		for (short i = 0; i < *SIZE / 2; i++)
		{
			*(arrbuf + iterator) = *(arr + i);
			iterator++;
		}
	}
	else
	{
		for (short i = (*SIZE / 2)+1; i < *SIZE; i++)
		{

			*(arrbuf + iterator) = *(arr + i);
			iterator++;
		}
		*(arrbuf + iterator) = *(arr + (*SIZE/2));
		iterator++;
		for (short i = 0; i < *SIZE / 2; i++)
		{
			*(arrbuf + iterator) = *(arr + i);
			iterator++;
		}

	
	}
	for (short i = 0; i < *SIZE; i++)
	{
		std::cout << *(arrbuf + i) << " ";
	}
	std::cout << std::endl;
}

void printArr(int arr[], const int *SIZE)
{
	for (short i = 0; i < *SIZE; i++)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;

}

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 11;
	int arr[SIZE]{};

	fillArr(arr, &SIZE);
	printArr(arr, &SIZE);
	opArr(arr, &SIZE);
	//printArr(arr, &SIZE);
	
	system("pause");
	return 0;
}