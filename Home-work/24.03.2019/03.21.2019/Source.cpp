/*Написати функцію, яка отримує матрицю дробових чисел і повертає ссилку (посилання) на елемент матриці, найближчий до середнього арифметичного матриці. За допомогою функції: 
	a) Вивести елемент, найближчий до середнього 
    b) Змінити знак елемента, найближчий до середнього, на протилежний */
	#include<iostream>
	#include<ctime>
	#include<string>
	using namespace std;
	float* AVGarr(float arr[], int size)
	{
		float buf=0;
		for (int i = 0; i < size; i++)
		{
			buf+=arr[i];
		}
		buf /= size;
		return &buf;
	}
	void RevSign(float &Nearer)
	{
		if (Nearer < 0)
		{
			abs(Nearer);
		}
		else
		{
			Nearer -= Nearer * 2;
		}
	}
	float* NearerArr(float arr[], int size, float &avg)
	{
		float nearerarrr = 0;
		float min = 100000;
		float max = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > avg)
			{
				if (arr[i] < min)
				{
					min = arr[i];
				}
			}
			else if (arr[i] < avg)
			{
				if (arr[i]>max)
				{
					max = arr[i];
				}
			}
		}
		//max - first nearer
		//min - two nearer 
		if (avg - max < min - avg)
		{
			nearerarrr = max;
		}
		else if (avg - max > min - avg)
		{
			nearerarrr = min;
		}
		else
		{
			nearerarrr = max;
		}
		return &nearerarrr;
	}
	void fillarr(float arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 1000 / 10.0;
		}
	}
	void printarr(float arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout<<i<<") > "<<arr[i]<<endl;
		}
		cout << endl;
	}

	int main()
	{
		srand(unsigned(time(NULL)));
		int size = 10;
		float avgarr = 0;
		cout << "enter SIZE arr >";
		cin >> size;
		float *arr = new float[size];
		fillarr(arr, size);
		avgarr = *AVGarr(arr, size);
		cout << "Avg > " << avgarr << endl;
		float nearerarr = 0 ;
		nearerarr = *NearerArr(arr, size, avgarr);
		cout << "nearerarr > " << nearerarr<<endl;
		RevSign(nearerarr);
		cout << "revers nearerarr > " << nearerarr << endl;
		printarr(arr, size);
		delete[] arr;
		system("pause");
		return 0;
	}
/*C++ 
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні [-12..56].
Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. */
//#include<iostream>
//#include<ctime>
//using namespace std;
//
//int * arrarr(int arr[],int &size, int tmp)
//{
//	size++;
//	int *arrbuf = new int[size];
//	for (int i = 0; i < size-1; i++)
//	{
//		arrbuf[i] = arr[i];
//	}
//	arrbuf[size-1] = tmp;
//	delete[] arr;
//	return arrbuf;
//}
//void fillarr(int arr[],const int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		arr[i]=rand()%100+1;
//	}
//}
//void printarr(int arr[],const int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i]<<" ";
//	}
//	cout << endl;
//}
//void adresarr(int arr[])
//{
//	cout << " adres your arr > "<< arr<<endl;
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int size = 10;
//	cout << "enter SIZE arr >";
//	cin >> size;
//	int *arr = new int[size];
//	int tmp;
//	fillarr(arr, size);
//	printarr(arr,size);
//	adresarr(arr);
//	printarr(arr, size);
//	cout << "Enter element > ";
//	cin >> tmp;
//	arr=arrarr(arr, size, tmp);
//	printarr(arr, size);
//	adresarr(arr);
//	delete[] arr;
//	system("pause");
//	return 0;
//}