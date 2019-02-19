/*1.	Написати рекурсивну функцію, яка отримує ціле число і виводить його у двійковій системі числення*/
/*#include <iostream>
#include <ctime>

void foo(int Num)
{
	if (Num >= 2)
	{
		foo(Num / 2);
	}
	std::cout << Num % 2;	
}
int main()
{
	int Num = 0;
	std::cout << "Enter num  - ";
	std::cin >> Num;
	foo(Num);
	std::cout << std::endl;
	system("pause");
	return 0;
}*/

/*2.	Написати рекурсивну логічну функцію, яка перевіряє чи переданий у функцію масив впорядкований за зростанням(не спаданням). */
//#include <iostream>
//#include <ctime>
//bool bufbool;
//bool foo(int bufarr[],int arr[],const int SIZE,int buf)
//{
//	if (buf == SIZE)
//	{
//		return bufbool;
//	}
//	buf++;
//	if (bufarr[buf]==arr[buf])
//	{
//		bufbool = true;
//	}
//	else if(bufarr[buf] != arr[buf])
//	{
//		return false;
//	}
//	foo(bufarr, arr, SIZE, buf);
//}
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE]{};
//	int bufarr[SIZE]{};
//	int iterator = SIZE,buf=0;
//	
//	for (int i = 0; i < SIZE; i++)
//	{
//		std::cout << "Enter num  (" << iterator << ")- ";
//		std::cin >> arr[i];
//		iterator--;
//	}
//	memcpy(bufarr, arr, sizeof(bufarr));
//
//	for (int i = SIZE - 1; i >= 1; i--) {
//
//		for (int j = 0; j < i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//
//	}
//	std::cout << std::boolalpha << foo(bufarr, arr, SIZE, buf);
//
//	std::cout << std::endl;
//	system("pause");
//	return 0;
//}