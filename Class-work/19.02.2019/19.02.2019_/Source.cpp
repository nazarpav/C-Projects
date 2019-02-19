/*5. C++ 
Написати функцію, яка отримує 2 вказівники на змінні і виконує обмін значеннями між змінними. 
Перевірити роботу функції для двох змінних. 
Перевірити роботу функції для того, щоб поміняти місцями у одновимірному масиві перший елемент з другим, третій з четвертим і т. д 
Перевірити роботу функції для того, щоб обернути масив. */

#include<iostream>
#include <ctime>

void foo(int arr[],const int *SIZE,int index1,int index2)
{
	int *buf=0;
	*buf = *(arr + index1);
	*(arr + index1) = *(arr + index2);
	*(arr + index2) = *buf;
} 
void fillArr(int arr[], const int *SIZE)
{
	for (short i = 0; i < *SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;
	}
}
void printarr(int arr[], const int *SIZE)
{
	for (short i = 0; i < *SIZE; i++)
	{
		std::cout << arr[i]<<" ";
	}
	std::cout << std::endl;
}
int main()
{
	srand(unsigned(time(NULL)));

	int index1= 0, index2 = 0;
	std::cout << "Enter index element of array1 :: ";
	std::cin >> index1;
	std::cout << "Enter index element of array2 :: ";
	std::cin >> index2;
	const int SIZE = 10;
	int arr[SIZE];
	fillArr(arr, &SIZE);
	printarr(arr, &SIZE);
	foo(arr, &SIZE,index1,index2);
	printarr(arr, &SIZE);

	system("pause");
	return 0;
}

/*4. Написати функцію (шаблоні ), яка приймає два вказівника. За допомогою функції: 
Вивести на екран менше з двох введених чисел  (з клавіатури)
Збільшити на 10 менше число. */

//#include<iostream>
//#include <ctime>
//
//void foo(int *pa,int *pb)
//{
//	if(*pa<*pb)
//	{
//		std::cout << "a < b " << std::endl;
//		*pa += 10;
//		std::cout << "a = "<< *pa << std::endl;
//	}
//	else if (*pa > *pb)
//	{
//		std::cout << "a > b " << std::endl;
//		*pb += 10;
//		std::cout << "b = "<< *pb << std::endl;
//	}
//	else
//	{
//		std::cout << "a = b " << std::endl;
//	}
//	
//} 
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int a = 20, b = 10;
//	int *pa = &a, *pb = &b;
//	foo(pa, pb);
//	system("pause");
//	return 0;
//}

/*Дано два масиви, впорядковати їх по зростанню.
Сформуйте масив який складається з елементів масивів А і В, впорядкованих по зростанню і виводить адреси елеиентів масиву*/
// #include<iostream>
//#include <ctime>
//
//void foo(int arr1[],int arr2[],int arr3[], const int *SIZE)
//{
//	
//	for (int i = *SIZE - 1; i >= 1; i--) {
//
//		for (int j = 0; j < i; j++) {
//			if (arr1[j] > arr1[j + 1]) {
//				int tmp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = *SIZE - 1; i >= 1; i--) {
//
//		for (int j = 0; j < i; j++) {
//			if (arr2[j] > arr2[j + 1]) {
//				int tmp = arr2[j];
//				arr2[j] = arr2[j + 1];
//				arr2[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = *SIZE - 1; i >= 1; i--) {
//
//		arr3[i] = arr1[i];
//	}
//	for (int i = *SIZE - 1; i >= 1; i--) {
//
//		arr3[i+10] = arr2[i];
//	}
//} 
//void fillarr(int arr[] ,const int *SIZE)
//{
//	for (short i = 0; i < *SIZE; i++)
//	{
//		arr[i] = rand() % 10 + 1;
//	}
//}
//void printarr(int arr3[],const int *SIZEE)
//{
//	for (short i = 0; i < *SIZEE; i++)
//	{
//		std::cout<<arr3[i]<<" ";
//	}
//	std::cout << std::endl;
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int SIZE = 10;
//	int arr1[SIZE]{};
//	int arr2[SIZE]{};
//
//	const int SIZEE = (SIZE) * 2;
//	int arr3[SIZEE]{};
//
//	fillarr(arr1,&SIZE);
//
//	fillarr(arr2,&SIZE);
//
//	foo(arr1,arr2,arr3,&SIZE);
//	printarr(arr3, &SIZEE);
//	system("pause");
//	return 0;
//}


/*2. Дано три числа. Оголосити посилання на ці числа.
Отримати добуток трьох заданих чисел, середє арифметичне, найменше з них, користуючись непрямим доступом до чисел (через посилання).  */

//#include<iostream>
//#include <ctime>
//
//void foo(int &ha,int&hb,int&hc)
//{
//	std::cout <<"multiplication a b c = " << ha * hb*hc<<std::endl;
//	std::cout << "average num as a b c = " << (ha + hb + hc)/3 << std::endl;
//	if (ha < hb&&ha < hc)
//	{
//		std::cout << "a is min"<<std::endl;
//	}
//	else if (hb < ha&&hb < hc)
//	{
//		std::cout << "b is min" << std::endl;
//	}
//	else if (hc < hb&&hc < hb)
//	{
//		std::cout << "c is min" << std::endl;
//	}
//	else
//	{
//		std::cout << "a = b = c" << std::endl;
//	}
//} 
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int a = rand() & 10 + 1;
//	int b = rand() % 10 + 1;
//	int c = rand() % 10 + 1;
//	int &ha = a, &hb = b, &hc = c;
//	foo(ha,hb,hc);
//	system("pause");
//	return 0;
//}

/*.  Написати функцію, яка приймає вказівник на змінну і записує в неї результат множення на  самоу себе. */
//#include<iostream>
//
//
//void fpoint(int *a)
//{
//	*a *= *a;
//}
//int main()
//{
//	int a = 10;
//	/*int &ra = a;*/
//	std::cout << "before = " << std::endl;
//	fpoint(&a);
//	std::cout << "after = "<<a<< std::endl;
//	system("pause");
//	return 0;
//}