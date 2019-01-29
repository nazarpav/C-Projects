//Написать функцию frame, которая выводит на экран рамку. В качестве параметров функции должны передаваться размер рамки.   
#include <iostream>
#include <ctime>
using namespace std;
void probel(int a = 0)
{
	for (short i = 0; i < a; i++)
	{
		cout << " ";
	}
}

void foo(int x = 0, int y = 0)
{
	for (short i = 0; i < x; i++)
	{
		cout << "=";
	}
	cout << endl;
	for (short i = 0; i < x; i++)
	{
		cout << "=";
		probel(x-2);
		cout << "=";
		cout <<endl;

	}
	for (short i = 0; i < x; i++)
	{
		cout << "=";
	}

}
int main()
{
	srand(unsigned(time(NULL)));
	int x = 0,y=0;
	cout << "enter x\n:: ";
	cin >> x;
	cout << "enter y\n:: ";
	cin >> y;
	foo(x, y);
	cout << endl;

	system("pause");
	return 0;
}




////1.  Написать функцию Dohod, которая вычисляет доход по вкладу.Исходными данными для функции являются : величина вклада, процентная ставка(годовых) и срок вклада(количество дней).
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int foo(int money = 0, int procent = 0, int day = 0)
//{
//	return money * procent*day / 365 * 100;
//	
//
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int money = 0,procent=0,day=0;
//	cout << "enter money\n::";
//	cin >> money;
//	cout << "enter procent\n::";
//	cin >> procent;
//	cout << "enter termofdeposit\n::";
//	cin >> day;
//	cout << "your money:: "<< foo(money,procent,day);
//
//
//	system("pause");
//	return 0;
//}



//#include <iostream>
//#include <ctime>
//using namespace std;
//
//int foo(int hours = 0, int minutes = 0, int second = 0)
//{
//	hours *= 60;
//	minutes += hours;
//	minutes *=60;
//	minutes += second;
//	return minutes;
//	
//
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//
//	int hours = 0, minutes = 0, seconds = 0,sum=0;
//
//	/*
//	1.  C++ Написати функцію, яка приймає три аргументи: години, хвилини, секунди. Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах 
//	*/
//
//	cout << "enter hours\n::";
//	cin >>hours;
//	cout << "enter minutes\n::";
//	cin >> minutes;
//	cout << "enter seconds\n::";
//	cin >> seconds;
//
//	sum = foo(hours, minutes, seconds);
//	cout << sum;
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}