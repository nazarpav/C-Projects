#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>

using namespace std;
int sum = 0;

void func(string)
{
	int arr[6]{};
	for (short i = 0; i < 6; i++)
	{
		arr[i]=num
	}
}

int main()
{
	string num;
	srand(unsigned(time(NULL)));
	cout << "enter num\n::";
	cin >> num;
	func(num);
	system("pause");
	return 0;
}



/*
C++
Написати програму для виводу на екран чисел Фібоначчі: (1,1,2,3,5,8... xn = xn-1 + xn-2), менших заданого числа Q.*/
//#include <iostream>
//
//unsigned int fibonacci(unsigned int n)
//{
//	return n < 2 ? n : fibonacci(n - 2) + fibonacci(n - 1);
//}
//
//int main()
//{
//	const unsigned int N = 20;
//
//	for (unsigned int i = 0; i < N; i++)
//	{
//		std::cout << i << ": " << fibonacci(i) << std::endl;
//	}
//	system("pause");
//	return 0;
//}


//#include <iostream>
//#include <ctime>
//#include <windows.h>
//#include <string>
//using namespace std;
//int sum = 0;
//template<typename T,typename T1>
//T func(T num1,T1 num2)
//{
//	if (num1>=num2-1)
//	{
//		return sum;
//	}
//	num1++;
//	sum += num1;
//
//	return func(num1,num2);
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	cout<<func(2,6);
//	cout << endl;
//
//	system("pause");
//	return 0;
//}