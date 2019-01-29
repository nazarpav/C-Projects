#include <iostream>
#include <ctime>
using namespace std;

int foo(int hours = 0, int minutes = 0, int second = 0)
{
	hours *= 60;
	minutes += hours;
	minutes *=60;
	minutes += second;
	return minutes;
	

}
int main()
{
	srand(unsigned(time(NULL)));

	int hours = 0, minutes = 0, seconds = 0,sum=0;

	/*
	1.  C++ Написати функцію, яка приймає три аргументи: години, хвилини, секунди. Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах 
	*/

	cout << "enter hours\n::";
	cin >>hours;
	cout << "enter minutes\n::";
	cin >> minutes;
	cout << "enter seconds\n::";
	cin >> seconds;

	sum = foo(hours, minutes, seconds);
	cout << sum;






	system("pause");
	return 0;
}