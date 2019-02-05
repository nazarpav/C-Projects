//3. �������� ������� ������� ��� ������ � ����������� ������� :
//a.�������� �������� ������(��� ���������� ���������� �����),
//b.������ �������� ������ �� �����,
//c.������ ������� ��������� �������� � �����(������� ���������, -1 - ���� �� ��������)
//d.������ ���������� ��������� �������� � �����,
//e.������������ �������� ������ ���������� �����.
//f.���������� ������ ��������� ������� ���������
//������������ ������ ��������� ������� ��� ������ ������, ���������.
#include <iostream>
#include <ctime>
using namespace std;
template<typename T1, typename T2>
void Fill(T1 arr[], const T2 SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
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

template<typename T1, typename T2,typename T3>
int fooin(T1 arr[], const T2 SIZE,T3 num)
{
	int index1 = 0;
	for (short i = 0; i < SIZE; i++)
	{
		if (num==arr[i])
		{
			index1 = i;
		}
	}
	
	return index1;
}
template<typename T1, typename T2, typename T3>
int fooout(T1 arr[], const T2 SIZE, T3 num)
{
	int index2 = 0;
	for (short i = SIZE; i > 0; i--)
	{
		if (num == arr[i])
		{
			index2 = i;
		}
	}
	return index2;
}
template<typename T1, typename T2>
T1 arrrand(T1 arr[], const T2 SIZE)
{
	int arrbuf[SIZE];
	int numbuf = 0;
	for (short i = 0; i < 0; i++)
	{
		numbuf = rand % 10;
		arrbuf[numbuf] = arr[i];
	}
	return arrbuf[SIZE];
}
int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	srand(unsigned(time(NULL)));
	int num = 0;
	Fill(arr, SIZE);
	Print(arr, SIZE);
	cout << "enter num :: ";
	cin >> num;
	cout<<fooin(arr, SIZE, num)<<endl;
	cout<<fooout(arr, SIZE, num) << endl;
	cout << arrrand(arr, SIZE) << endl;
	Print(arr, SIZE);
	system("pause");
	return 0;
}


/*C++ 
�������� ������������ ������� � ������� ��������, �� �� �������. 
��� ������ ���� ���������� �� ����� ����� ������ ������� �������� ���� �� ������� �������� ������ ������� ��������� ������. 
��� ������ ���� ���������� �� ������� ����� ������ ������� �������� ������ �� ������� �������� ���� ���������� ��������� ������.  */
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//
//
//void Fill(int arr[],const int SIZE )
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 10;
//	}
//}
//
//template<typename T1,typename T2>
//void Print(T1 arr[], const T2 SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout << endl;
//}
//
//int sdvig(int arr[], const int SIZE)
//{
//	const int SIZEe = 10;
//	int bufarr[SIZEe]{};
//	if (arr[0] % 2 == 0)
//	{
//		for (short j = 0; j < arr[0]; j++)
//		{
//			bufarr[j] = arr[j + arr[0]];
//		}
//		for (short i = 0; i < SIZE - arr[0]; i++)
//		{
//			bufarr[arr[0] + i] = arr[i];
//
//		}
//	}
//	else
//	{
//		for (short i = 0; i < SIZE - arr[0]; i++)
//		{
//			bufarr[arr[0] + i] = arr[i];
//
//		}
//		for (short j = 0; j < arr[0]; j++)
//		{
//			bufarr[j] = arr[j + arr[0]];
//		}
//
//
//	}
//	return bufarr[SIZE];
//}
//
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE];
//	srand(unsigned(time(NULL)));
//
//	Fill(arr, SIZE);
//	Print(arr, SIZE);
//	arr[SIZE]=sdvig(arr, SIZE);
//	Print(arr, SIZE);
//	system("pause");
//	return 0;
//}




/*C++ 
�������� ������� �������, �� � ����� ��������� ��������� ����������� ����� � ���� ���������. ��������� ������ 
������� ��� ����������� ������ ������� 10 �� ������� 7. 
������� Fill(), ��� �������� ����������� ����� ����������� ���������� � ������� [-12..20] 
�������� ������� Print(), ��� �������� �������� ������ �� �����. �������! ������������ ���� ������� �� ������� ���� int, double, char 
�������, ��� ������� ������� ������ �������� ������ 
������������ �������:
- ��� ����������� ���������� ������������� �������� ������
- ��� ����������� ������������� �������� ������ � ������� (�� ����� ��������� ���������) */


//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void Fill(int arr[],const int SIZE )
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 32 + (-12);
//	}
//}
//
//template<typename T1,typename T2>
//void Print(T1 arr[], const T2 SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout << endl;
//}
//
//int Minus(int arr[], const int SIZE)
//{
//	int iteratorr = 0;
//	for (short i = 0; i < SIZE; i++)
//	{
//		if (arr[i]<0)
//		{
//			iteratorr++;
//		}
//	}
//	return iteratorr;
//}
//double Minus(double arr[], const int SIZE)
//{
//	double iteratorr = 0;
//	for (short i = 0; i < SIZE; i++)
//	{
//		if (arr[i] < 0)
//		{
//			iteratorr++;
//		}
//	}
//	return iteratorr;
//}
//int AverageNum(int arr[], const int SIZE)
//{
//	int sum = 0;
//	for (short i = 0; i < SIZE; i++)
//	{
//		sum += arr[i];
//	}
//	sum /= SIZE;
//	return sum;
//}
//
//float AverageNum(float arr[], const int SIZE)
//{
//	float sum = 0;
//	for (short i = 0; i < SIZE; i++)
//	{
//		sum += arr[i];
//	}
//	sum /= SIZE;
//	return sum;
//}
//
//int weightnumsarr(int arr[], const int SIZE,int index1=0,int index2=0)
//{
//	int buf = 0;
//	for (short i = index1; i < index2; i++)
//	{
//		if (arr[i] > buf)
//		{
//			buf = arr[i];
//		}
//	}
//	return buf;
//}
//
//int main()
//{
//	int num1 = 0,num2=0;
//	const int SIZE = 7;
//	int arr[SIZE];
//	srand(unsigned(time(NULL)));
//
//	Fill(arr, SIZE);
//	Print(arr, SIZE);
//	cout<<"minus nums::"<< Minus(arr, SIZE)<<endl;
//	cout << "AverageNum::" << AverageNum(arr, SIZE)<<endl;
//	cout << "enter nums\n::";
//	cin >> num1 >> num2 ;
//	cout << "the largest num in the arr::" << weightnumsarr(arr, SIZE,num1,num2)<<endl;
//	system("pause");
//	return 0;
//}