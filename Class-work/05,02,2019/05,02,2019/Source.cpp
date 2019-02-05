/*C++ 
Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю. Перевірити роботу 
функції для одновимірних масивів довжини 10 та довжини 7. 
функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні [-12..20] 
шаблонну функцію Print(), яка виводить елементи масиву на екран. Примітка! Протестувати дану функцію на масивах типу int, double, char 
функцію, яка повертає кількість відємних елементів масиву 
перевантажені функції:
- для знаходження середнього арифметичного елементів масиву
- для знаходження максимального елемента масиву в проміжку (між двома вказаними індексами) */


#include <iostream>
#include <ctime>
using namespace std;

void Fill(int arr[],const int SIZE )
{
	for (short i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 32 + (-12);
	}
}

template<typename T1,typename T2>
void Print(T1 arr[], const T2 SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout << endl;
}

int Minus(int arr[], const int SIZE)
{
	int iteratorr = 0;
	for (short i = 0; i < SIZE; i++)
	{
		if (arr[i]<0)
		{
			iteratorr++;
		}
	}
	return iteratorr;
}
double Minus(double arr[], const int SIZE)
{
	double iteratorr = 0;
	for (short i = 0; i < SIZE; i++)
	{
		if (arr[i] < 0)
		{
			iteratorr++;
		}
	}
	return iteratorr;
}
int AverageNum(int arr[], const int SIZE)
{
	int sum = 0;
	for (short i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	sum /= SIZE;
	return sum;
}

float AverageNum(float arr[], const int SIZE)
{
	float sum = 0;
	for (short i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	sum /= SIZE;
	return sum;
}

int weightnumsarr(int arr[], const int SIZE,int index1=0,int index2=0)
{
	int buf = 0;
	for (short i = index1; i < index2; i++)
	{
		if (arr[i] > buf)
		{
			buf = arr[i];
		}
	}
	return buf;
}

int main()
{
	int num1 = 0,num2=0;
	const int SIZE = 7;
	int arr[SIZE];
	srand(unsigned(time(NULL)));

	Fill(arr, SIZE);
	Print(arr, SIZE);
	cout<<"minus nums::"<< Minus(arr, SIZE)<<endl;
	cout << "AverageNum::" << AverageNum(arr, SIZE)<<endl;
	cout << "enter nums\n::";
	cin >> num1 >> num2 ;
	cout << "weightnumsarr::" << weightnumsarr(arr, SIZE,num1,num2)<<endl;
	system("pause");
	return 0;
}