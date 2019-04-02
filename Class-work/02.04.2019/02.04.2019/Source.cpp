/*C++ 
Написати програму, яка знаходить суму елементів масиву. Розмір масиву є константою, яка оголошена на рівні препроцесора  */
#include <iostream>
#include<string>
#include<ctime>
#define size 10

using namespace std;

void fill(int arr[])
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
}
void print(int arr[])
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	srand(unsigned(time(NULL)));
	int arr[size];
	fill(arr);
	print(arr);
	system("pause");
	return 0;
}
/*
C++
Написати макрос(макро - функцію), який знаходить та повертає максимальне з трьох переданих йому чисел*/
//#include <iostream>
//#include<string>
//#include<ctime>
//#define max(a,b,c)((a)>(b)&&(a)>(c)?(a):(b)>(c)&&(b)>(a)?(b):(c)>(a)&&(c)>(b)?(c):(a))
//
//using namespace std;
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	cin >> a >> b >> c;
//	cout << "max num> " << max(a, b, c) << endl;
//	system("pause");
//	return 0;
//}
/*
C++ 
Написати макрос (макро-функцію), який обчислює та виводить на екран суму квадратів двох переданих чисел */
//#include <iostream>
//#include<string>
//#include<ctime>
//#define max(a,b)(a*a+b*2)
//
//using namespace std;
//
//int main()
//{
//	int a = 0, b = 0;
//	cin >> a >> b;
//	cout << "sum num> " << max(a, b) << endl;
//	system("pause");
//	return 0;
//}
/*
C++
Написати макрос(макро - функцію), який знаходить та повертає максимальне з трьох переданих йому чисел*/
//#include <iostream>
//#include<string>
//#include<ctime>
//#define max(a,b,c)((a)>(b)&&(a)>(c)?(a):(b)>(c)&&(b)>(a)?(b):(c)>(a)&&(c)>(b)?(c):(a))
//
//using namespace std;
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	cin >> a >> b >> c;
//	cout << "max num> " << max(a, b, c) << endl;
//	system("pause");
//	return 0;
//}