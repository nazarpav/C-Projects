/*
1.	Написати шаблонні функції для роботи з двовимірними масивами різних типів.
-	Заповнення масиву   (з використанням  &)
-	Вивід масиву на екран   (з використанням  &)   
-	Вивід всіх елементів на головній діагоналі на екран  
-	Знаходження найбільшого елемента масиву
-	Перестановка рядків масиву
-	Очищення масиву  (Заповненя нулями)
Задачу робити з Меню. Вихід з меню по 0*/
#include<iostream>
#include<ctime>

template<typename T>
void fillarr(T arr[10][10], const T &SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		 for (short j= 0; j < SIZE; j++)
		 {
			 arr[i][j]= rand() % 17;
		 }
	}
}
template<typename T>
void printarr(T arr[10][10], const T &SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		for (short j = 0; j < SIZE; j++)
		{
			std::cout<<arr[i][j]<<" ";
		}
		std::cout << std::endl;
	}
}
template<typename T>
void foo(T arr[10][10], const int &SIZE)
{
	int buf = 0;
	for (short i = 0; i < SIZE; i++)
	{
		for (short j = 0; j < SIZE; j++)
		{
			if (buf < arr[i][j])
			{
				buf = arr[i][j];
			}
		}
	}
	std::cout<<"max element - "<< buf<<"\n";
}
template<typename T>
void rowsrev(T arr[10][10], const int SIZE,int num1,int num2)
{
	int buf = 0;
	for (short i = 0; i < SIZE; i++)
	{
		buf = arr[num1][i];
		arr[num1][i]=arr[num2][i] ;
		arr[num2][i]=buf;
	}
}
template<typename T>
void arrnull(T arr[10][10], const int SIZE)
{
	for (short i = 0; i < SIZE; i++)
	{
		for (short j = 0; j < SIZE; j++)
		{
			arr[i][j]=0;
		}
	}
}

int main()
{
	srand(unsigned int(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE][SIZE]{};
	int num1 = 0, num2 = 0, var = 0;
	fillarr(arr, SIZE);
	while (true)
	{
	system("cls");
	std::cout << "1 - rowsrev\n2 - arr =0\n3 - max element\n4 - fill 0 - exit\n::";
	std::cin >> var;
	if (var == 1)
	{	
		std::cout << "enter two x y\n";
		std::cin >> num1 >> num2;
		std::cout << "after=======>\n";
		printarr(arr, SIZE);
		rowsrev(arr, SIZE, num1, num2);
		std::cout << "befor=======>\n";
		printarr(arr, SIZE);
		system("pause");
	}
	else if (var == 2)
	{
		std::cout << "after=======>\n";
		printarr(arr, SIZE);
		arrnull(arr, SIZE);
		std::cout << "befor=======>\n";
		printarr(arr, SIZE);
		system("pause");
	}
	else if (var == 3)
	{
		foo(arr, SIZE);
		system("pause");
		std::cout<<"\n";
	}
	else if (var == 4)
	{
		fillarr(arr, SIZE);
	}
	else if (var == 0)
	{
		break;
	}
	else
	{
		std::cout << "eror!\n";
		system("pause");
	}
	//var = 0;
}
	
	

	system("pause");
	return 0;
}

///*35.	Написати функцію, яка виводит на екран 10 випадкових чисел у
//діапазоні від 0 до 17 і підраховує їх суму та добуток. Сума та добуток повинні вивестись в мейні*/
//#include<iostream>
//#include<ctime>
//
//void fillarr(int arr[] , const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		*(arr + i) = rand() % 17;
//	}
//}
//void printarr(int arr[] , const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		std::cout<< *(arr + i)<<" ";
//	}
//	std::cout << std::endl;
//}
//void sumdob(int arr[], const int SIZE,int &sum,int &dob)
//{
//	
//	for (short i = 0; i < SIZE; i++)
//	{
//		sum+=*(arr+1);
//		dob*=*(arr+1);
//	}
//}
//
//
//
//
//
//int main()
//{
//	srand(unsigned int(time(NULL)));
//	const int SIZE = 10;
//	int arr[SIZE]{};
//	int sum = 0,dob=1;
//	fillarr(arr, SIZE);
//	printarr(arr, SIZE);
//	sumdob(arr, SIZE, sum ,dob);
//	std::cout <<"summa"<< sum<<std::endl;
//	std::cout <<"dob"<< dob<<std::endl;
//
//	system("pause");
//	return 0;
//}
///* 37.	Написати функції:
//- Заповнення масиву; 
//- Виводу одновимірного масиву на екран (функція отримує вказівник на перший елемент масиву); 
//- Виводу елементів масиву, які стоять на парних місцях, на екран (функція отримує вказівник на третій!!! елемент масиву);*/
//
//#include<iostream>
//#include<ctime>
//
//void fillarr(int arr[] , const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		*(arr + i) = rand() % 100 + 1;
//	}
//}
//void printarr(int arr[] , const int SIZE)
//{
//	for (short i = 0; i < SIZE; i++)
//	{
//		std::cout<< *(arr + i)<<" ";
//	}
//	std::cout << std::endl;
//}
//void printarrPAR(int arr[] , const int SIZE,int &index)
//{
//	const int constindex = index;
//	for (; index < SIZE; index++)
//	{
//		if (index % 2 == 0)
//		{
//			std::cout << *(arr + index) << "\t";
//		}
//	}
//	index = constindex;
//	std::cout << std::endl;
//	for (; index < SIZE; index++)
//	{
//		if (index % 2 == 0)
//		{
//			std::cout << "^\t";
//		}
//	}
//	index = constindex;
//	std::cout << std::endl;
//	for (; index < SIZE; index++)
//	{
//		if (index % 2 == 0)
//		{
//			std::cout << index<<"\t";
//		}
//	}
//	std::cout << std::endl;
//}
//
//
//
//int main()
//{
//	srand(unsigned int(time(NULL)));
//	const int SIZE = 10;
//	int arr[SIZE]{};
//	int index = 2;
//	fillarr(arr, SIZE);
//	printarr(arr, SIZE);
//	printarrPAR(arr, SIZE, index);
//
//	system("pause");
//	return 0;
//}