/*1. Написати шаблони функцій для роботи з двовимірним масивом :
a.введення(або заповнення випадковими числами) двовимірного масиву
b.виведення матриці на екран
c.перевірка чи всі(кожен) рядки матриці впорядковані за зростанням(шаблон функції повертає логічне значення).
d.перевірка чи заданий стовпець матриці впорядкований за спаданням*/

#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>


template <typename T>
void PrintArr(T** arr, const int rows, const int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
template <typename T>
void FiilArr(T** arr, const int rows, const int cols)
{
	char variable;
	std::cout << "How do you want to fill the array?\nManually or by Accident M/A\n::";
	std::cin >> variable;
	if (variable=='a'||variable=='A')
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arr[i][j]=rand()%100+1;
			}
		}
	}
	else if (variable == 'W' || variable == 'w')
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				std::cin >> arr[i][j];
			}
		}
	}
}
template <typename T>
bool CheckArrSTR(T** arr, const int rows, const int cols)
{
	const int SIZE = 10;
	int arrbuf[SIZE][SIZE];
	int ind = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arrbuf[i][j] = arr[i][j];
		}
	}
	for (int g = 0; g < rows; g++)
	{
		for (int i = 1; i < cols; ++i)
		{
			for (int j = 0; j < cols - i; j++)
			{
				if (arrbuf[g][j] < arrbuf[g][j + 1])
				{
					int temp = arrbuf[g][j];
					arrbuf[g][j] = arrbuf[g][j + 1];
					arrbuf[g][j + 1] = temp;
				}
			}
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j]=arrbuf[i][j];
		}
	}
	char varN;
	short variable =0;
	std::cout << "Check string-1 or strings-2::  ";
	std::cin >> varN;
	if(varN=='1')
	{
		std::cout << "Enter string:: ";
		std::cin >> variable;
		if (variable < 1 && variable > cols)
		{
			return false;
		}
		for (int j = 0; j < cols; j++)
		{
			//arr[i][j] = arrbuf[i][j];
			if (arr[variable][j] == arrbuf[variable][j])
			{
				std::cout << "mismatch" << std::endl;
				system("pause");
				return false;
			}
		}
	}
	std::cout << "the whole array is ordered descending)" << std::endl;
	return true;
	if (varN=='2')
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				//arr[i][j] = arrbuf[i][j];
				if (arr[i][j] != arrbuf[i][j])
				{
					std::cout << "mismatch"<<std::endl;
					system("pause");
					return false;
				}
			}
		}
		std::cout << "the whole array is ordered descending)" << std::endl;
		return true;
	}
	
}
template <typename T>
bool CheckArrCOL(T** arr, const int rows, const int cols)
{
	const int SIZE = 10;
	int arrbuf[SIZE][SIZE];
	int ind = 0;
	for (int i = 0; i < rows; i++)
	{

		for (int j = 0; j < cols; j++)
		{
			arrbuf[i][j] = arr[i][j];
		}
	}
	for (int g = 0; g < rows; g++)
	{
		for (int i = 1; i < cols; ++i)
		{
			for (int j = 0; j < cols - i; j++)
			{

				if (arrbuf[g][j] < arrbuf[g][j + 1])
				{
					int temp = arrbuf[g][j];
					arrbuf[g][j] = arrbuf[g][j + 1];
					arrbuf[g][j + 1] = temp;
				}
			}
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = arrbuf[i][j];
		}
	}
	char varN;
	short variable = 0;
	std::cout << "Check Column-1 or Columns-2::  ";
	std::cin >> varN;
	if (varN == '1')
	{
		std::cout << "Enter Column:: ";
		std::cin >> variable;
		if (variable < 1 && variable > cols)
		{
			return false;
		}
		for (int j = 0; j < cols; j++)
		{
			//arr[i][j] = arrbuf[i][j];
			if (arr[j][variable] == arrbuf[j][variable])
			{
				std::cout << "mismatch" << std::endl;
				system("pause");
				return false;
			}
		}
	}
	std::cout << "the whole array is ordered descending)" << std::endl;
	return true;
	if (varN == '2')
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				//arr[i][j] = arrbuf[i][j];
				if (arr[j][i] == arrbuf[j][i])
				{
					std::cout << "mismatch" << std::endl;
					system("pause");
					return false;
				}
			}
		}
		std::cout << "the whole array is ordered descending)" << std::endl;
		return true;
	}

}
int main()
{
	srand(unsigned(time(NULL)));
	const int rows = 10, cols = 10;
	bool returnCheck1;
	bool returnCheck2;
	int** Arr = new int*[rows];
	for (int i = 0; i < rows; ++i)
		Arr[i] = new int[cols];

	FiilArr(Arr, rows, cols);
	PrintArr(Arr, rows, cols);
	(Arr, rows, cols);
	returnCheck1 = CheckArrSTR(Arr, rows, cols);
	std::cout << "result "<<returnCheck1 << std::endl;
	returnCheck2 = CheckArrCOL(Arr, rows, cols);
	std::cout << "result " << returnCheck2 << std::endl;
	PrintArr(Arr, rows, cols);
	system("pause");
	return 0;
}






