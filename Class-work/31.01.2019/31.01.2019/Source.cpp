//5. C++ 
//����� ����� � 20 ����� ����� � ���������� �� 1 �� 20. ���������:
//�������� �������, ��� ������� �������� ������ �������� �����;
//�������� ��������� ����� � ���� � �������� � ������ ������� ����� ����������� ����� � �����;
//����������� �������� ������, �� ����������� ������ �� �������� ������� �� ��������, � �������� ������, �� ����������� ������ �� �������� ������� �� ���������.
# include <iostream>
# include <ctime>
using namespace std;

void Fill(int arr[], int s)
{

	for (int i = 0; i < s; i++)
	{
		arr[i] = rand() % 21;
	}
}

void Sort(int arr[], int s)
{
	int randnum = rand() % 21;
	int index = 0;
	for (int i = 0; i < s; i++)
	{
		if (randnum == arr[i])
		{
			index = i;
		}
	}
	for (int i = 0; i < s; i++)
	{
		for (int j = 0; j < s - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	cout << "rand num ::" << randnum << endl;
	cout << "index :: " << index << endl;
}

void Print(int arr[], int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << arr[i] << " ";


	}
}
int main()
{
	srand(time(0));
	const int size = 20;
	int arr[size];
	Fill(arr, size);
	Print(arr, size);
	Sort(arr, size);
	Print(arr, size);

	system("pause");
	return 0;
}




//4.C++
//����� ����� �����.�������� �������, ��� ����� ����� �� ��������� ��� �� ��������, � ��������� �� �������� ��������� �������.���� �� ����� 0, ���������� ��� �� ��������, ���� 1
//, ��� �� ���������.����� 2 ��������� ������� - �� ����� � ���� �����, ����� �������� �� ������������ ����� 1.

//#include <iostream>
//#include <ctime>
//using namespace std;
//
//void Fill(int arr[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		arr[i] = rand() % 30;
//	}
//
//}
//void Print(int arr[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{	
//		cout<<arr[i]<<" ";
//	}
//	
//}
//void sortarr(int arr[],const int SIZE,int buf=1)
//{
//	if (buf==1)
//	{
//		for (int i = SIZE - 1; i >= 1; i--) {
//
//			for (int j = 0; j < i; j++) {
//				if (arr[j] > arr[j + 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//		}
//	}
//	else if (buf == 0)
//	{
//
//		for (int i = 0; i < SIZE; i++)
//			for (int a = SIZE - i - 1; a > 0; a--)
//				if (arr[a] > arr[a - 1]) {
//					int buffer = arr[a];
//					arr[a] = arr[a - 1];
//					arr[a - 1] = buffer;
//				}
//	}
//	
//}
//
//int main()
//{
//	int num1 = 0;
//	const int SIZE = 10;
//	int arr[SIZE]{};
//	srand(unsigned(time(NULL)));
//
//	Fill(arr,SIZE);
//	Print(arr, SIZE);
//	cout << "enter num :: ";
//	cin >> num1;
//	sortarr(arr, SIZE, num1);
//	Print(arr, SIZE);
//	system("pause");
//	return 0;
//}


//3. C++
//�������� ������� �������, �� � ����� ��������� ��������� ����������� ����� � ���� ���������.��������� ������ ������� ��� ����������� ������ ��������� 3�4 �� 7�5.
//�������� ������� Fill(), ��� �������� ����������� ����� ����������� ���������� � �������[1..30]
//������� Print(), ��� �������� �������� ������ �� ����� � ������ �������.
//�������, ��� �������� �� ����� �������� �����

//#include <iostream>
//#include <ctime>
//using namespace std;
//const int SIZE1 = 3;
//const int SIZE2 = 4;
//int arr[SIZE1][SIZE2]{};
//
//void Fill()
//{
//	for (short i = 0; i < SIZE1; i++)
//	{
//		for (short j = 0; j < SIZE2; j++)
//		{
//			arr[i][j] = rand() % 30+1;
//		}
//	}
//
//}
//void Print()
//{
//	for (short i = 0; i < SIZE1; i++)
//	{
//		for (short j = 0; j < SIZE2; j++)
//		{
//			cout<<arr[i][j];
//		}
//		cout << endl;
//	}
//	
//}
//void PrintString(int index=0)
//{
//		for (short j = 0; j < SIZE2; j++)
//		{
//			cout << arr[index-1][j];
//		}
//		cout << endl;
//
//}
//
//int main()
//{
//	int num1 = 0;
//	srand(unsigned(time(NULL)));
//
//	Fill();
//	Print();
//	cout << "enter num :: ";
//	cin >> num1;
//	PrintString(num1);
//	system("pause");
//	return 0;
//}



//2. C++
//�������� ������� �������, �� � ����� ��������� ��������� ����������� ����� � ���� ���������.��������� ������ ������� ��� ����������� ������ ������� 10 �� ������� 7.
//������� Fill(), ��� �������� ����������� ����� ����������� ���������� � �������[-12..20]
//�������� ������� Print(), ��� �������� �������� ������ �� �����.�������!������������ ���� ������� �� ������� ���� int, double,
//�������, ��� ������� ������� ������ �������� ������
//������������ ������� :
//-��� ����������� ���������� ������������� �������� ������
//- ��� ����������� ������������� �������� ������ � �������(�� ����� ��������� ���������)

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
//void Print(int arr[], const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
//	cout << endl;
//}
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
//	int iteratorr = 0;
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
//	const int SIZE = 10;
//	int arr[SIZE];
//	srand(unsigned(time(NULL)));
//
//	Fill(arr, SIZE);
//	Print(arr, SIZE);
//	cout<<"minus nums::"<< Minus(arr, SIZE)<<endl;
//	cout << "AverageNum::" << AverageNum(arr, SIZE)<<endl;
//	cout << "enter nums\n::";
//	cin >> num1 >> num2 ;
//	cout << "weightnumsarr::" << weightnumsarr(arr, SIZE,num1,num2)<<endl;
//	system("pause");
//	return 0;
//}





//������� ������������ ������� ��� ����������� ������� ����� ����� ��������� �����.

//#include <iostream>
//#include <ctime>
//using namespace std;
//
////template <typename T>
//void foo(int num1=0,int num2=0,int num3=0 )
//{
//	cout << num1 + num2 + num3;
//}
//
//int main()
//{
//	int num1 = 0, num2 = 0, num3 = 0;
//	srand(unsigned(time(NULL)));
//	cout << "enter nums\n::";
//	cin >> num1 >> num2 >> num3;
//
//	foo(num1, num2, num3);
//
//	system("pause");
//	return 0;
//}

