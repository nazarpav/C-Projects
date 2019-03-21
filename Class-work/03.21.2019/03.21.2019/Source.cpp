/*C++ 
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні [-12..56].
Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. */
#include<iostream>
#include<ctime>
#include<string>
using namespace std;

int * arrarr(int arr[],int &SIZE, int tmp)
{
	SIZE++;
	int *arrbuf = new int[SIZE];
	for (int i = 0; i < SIZE-1; i++)
	{
		arrbuf[i] = arr[i];
	}
	arrbuf[SIZE-1] = tmp;
	delete[] arr;
	return arrbuf;
}
void fillarr(int arr[],const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i]=rand()%100+1;
	}
}
void printarr(int arr[],const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
}
void adresarr(int arr[])
{
	cout << " adres your arr > "<< arr<<endl;
}
int main()
{
	srand(unsigned(time(NULL)));
	int SIZE = 10;
	cout << "enter SIZE arr >";
	cin >> SIZE;
	int *arr = new int[SIZE];
	int tmp;
	fillarr(arr, SIZE);
	printarr(arr,SIZE);
	adresarr(arr);
	printarr(arr, SIZE);
	cout << "Enter element > ";
	cin >> tmp;
	arr=arrarr(arr, SIZE, tmp);
	printarr(arr, SIZE);
	adresarr(arr);
	delete[] arr;
	system("pause");
	return 0;
}



/*C++ 
Написати 2 логічні функції: bigger(int, int) – повертає true, якщо перше число більше другого, інакше повертає false; функція smaller(int, int ) – 
навпаки, повертає true, якщо перше менше другого. Написати функцію sort_arr(int *array, int size, bool(*f)(int, int)) для впорядкування масиву. 
Функція отримує масив та вказівник на логічну функцію, яка буде задавати порядок сортування. Так, наприклад, при передачі у функцію sort_arr()
третім аргументом адреси функції bigger, масив впорядкується по зростанню, а при передачі адреси функції smaller, масив впорядкується по спаданню. */

//#include<iostream>
//#include<ctime>
//#include<string>
//using namespace std;
//bool biger(int a, int b);
//bool smaller(int a, int b);
//void sort_arr(int *arr, int SIZE, bool(*f)(int,int),int a,int b)
//{
//	if (f(a,b)==false)
//	{
//		cout << ">\n";
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
//	else if (f(a, b) == true)
//	{
//		cout << "<\n";
//		for (int i = 0; i < SIZE; i++)
//		{
//			for (int a = SIZE - i - 1; a > 0; a--)
//			{
//				if (arr[a] > arr[a - 1]) {
//					int buffer = arr[a];
//					arr[a] = arr[a - 1];
//					arr[a - 1] = buffer;
//				}
//			}
//		}
//	}
//}
//
//bool biger(int a, int b)
//{
//	if (a > b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//bool smaller(int a, int b)
//{
//	if (a > b)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
//
//void fillarr(int arr[],const int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		arr[i]=rand()%100+1;
//	}
//}
//void printarr(int arr[],const int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//	cout << endl;
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int SIZE = 10;
//	int arr[SIZE]{};
//	int num1 = 0, num2 = 0;
//	fillarr(arr, SIZE);
//	printarr(arr,SIZE);
//	cin >> num1 >> num2;
//	sort_arr(arr, SIZE, smaller , num1, num2);
//	sort_arr(arr, SIZE, biger , num1, num2);
//
//
//
//	printarr(arr, SIZE);
//	system("pause");
//	return 0;
//}