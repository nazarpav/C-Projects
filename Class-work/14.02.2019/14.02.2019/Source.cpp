/*15.	Дано цілочисельний одновимірний масив.
Заповнити його, вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників*/
#include <iostream>
#include<ctime>
void fillarr(int arr[], const int *SIZE)
{
	for (short i = 0; i < *SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;;
	}
}
int printarr(int arr[],const int *SIZE)
{
	int sum = 0;
	int *psum = &sum;
	for (short i = 0; i < *SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	for (short i = *SIZE-1; i >= 0; i--)
	{
		std::cout << arr[i] << " ";
		*psum += arr[i];
	}
	std::cout << std::endl;
	return *psum;
}

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE =10;
	int arr[SIZE]{};

	fillarr(arr, &SIZE);
	std::cout<<"sum arr - "<<printarr(arr, &SIZE)<< std::endl;;

	system("pause");
	return 0;
}


/*4. 34.	Сгенерировать десять массивов из случайных чисел. Вывести их и сумму их элементов на экран.
Найти среди них один с максимальной суммой элементов. Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.*/
//#include <iostream>
//#include<ctime>
//const int SIZE = 10;
//int arr[SIZE][SIZE]{};
//int sumArr[SIZE]{};
//
//void opArr()
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		for (int j = 0; j < SIZE; j++)
//		{
//			arr[i][j] = rand() % 100 + 1;
//			sumArr[i] += arr[i][j];
//		}
//		std::cout <<"Arr sum ("<<i+1<<") = " << sumArr[i]<<std::endl;
//	}
//
//}
//int foo()
//{
//	int ind = 0,buf=0;
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (buf < sumArr[i])
//		{
//			buf = sumArr[i];
//			ind = i;
//		}
//	}
//
//	return ind+1;
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	opArr();
//	std::cout<<"the  height idex arr - "<< foo()<<std::endl;
//	
//	system("pause");
//	return 0;
//}
//3.  Написать примитивный калькулятор, пользуясь только указателями
//#include <iostream>
//#include<ctime>
//
//template <typename T>
//T plus(T *pnum1, T*pnum2)
//{
//	return (*pnum1)+(*pnum2);
//}
//template <typename T>
//T minus(T *pnum1, T*pnum2)
//{
//	return (*pnum1) - (*pnum2);
//}
//template <typename T>
//T division(T *pnum1, T*pnum2)
//{
//	return (*pnum1) / (*pnum2);
//
//}
//template <typename T>
//T multiplication(T *pnum1, T*pnum2)
//{
//	return (*pnum1) * (*pnum2);
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	auto num1 = 0, num2 = 0;
//	int var=0;
//	std::cout << "Seleck operation\n\n1 - +\n2 - -\n3 - /\n4 - *" << std::endl;
//	std::cin >> var;
//	std::cout << "Enter num - ";
//	std::cin >> num1 >> num2;
//	switch (var)
//	{
//	case 1: 
//		std::cout<<plus(&num1, &num2)<<std::endl;
//		break;
//	case 2:
//		std::cout << minus(&num1, &num2) << std::endl;
//		break;
//	case 3:
//		std::cout << division(&num1, &num2) << std::endl;
//		break;
//	case 4:
//		std::cout << multiplication(&num1, &num2) << std::endl;
//		break;
//	default:
//		std::cout << "EROR";
//		break;
//	}
//	system("pause");
//	return 0;
//}


////2. Используя указатели и оператор разыменования, обменять местами значения двух переменных
//
//#include <iostream>
//#include<ctime>
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int num1 = 0,num2=0,buf=0;
//	std::cout << "Enter num - "  ;
//	std::cin>> num1 >> num2;
//	int *pnum1 = &num1, *pnum2 = &num2;
//	std::cout << *pnum1 << " num1 " << *pnum2 << " num2 "<<std::endl;
//	buf=*pnum1;
//	*pnum1 = *pnum2;
//	*pnum2 = buf;
//	std::cout << *pnum1 << " num1 " << *pnum2 << " num2 " << std::endl;
//	system("pause");
//	return 0;
//}



////1.  Используя указатели и оператор разыменования, определить наибольшее из двух чисел.-- -
//#include <iostream>
//#include<ctime>
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int num1 = 0,num2=0;
//	std::cout << "Enter num - "  ;
//	std::cin>> num1 >> num2;
//	int *pnum1 = &num1, *pnum2 = &num2;
//	if (*pnum1 < *pnum2)
//	{
//		std::cout << num1 << " < " << num2<<std::endl;
//	}
//	else if (*pnum1 > *pnum2)
//	{
//		std::cout << num1 << " > " << num2 << std::endl;
//	}
//	else
//	{
//		std::cout << num1 << " = " << num2 << std::endl;
//	}
//
//	system("pause");
//	return 0;
//}