/*
Створити структуру з бітовими полями Час(години.хвилини, секунди).Продумати яка мінімальна кількість біт потрібна для збереження певного  елемента структури.Визначити функції :
заповнення об’єкта структури з клавіатури
вивід  об’єкта структури  на екран*/
#include <iostream>
#include<string>
#include<ctime>
#include <Windows.h>
using namespace std;

class time_
{
private:
	unsigned short seconds: 6;
	unsigned short minutes: 6;
	unsigned short hours: 5;
	unsigned short day: 5;
	unsigned short month: 4;
	unsigned short years : 11;
public:
	void set_seconds(unsigned short new_seconds)
	{
		seconds = new_seconds;
	}
	void set_minutes(unsigned short new_minutes)
	{
		minutes = new_minutes;
	}
	void set_hours(unsigned short new_hours)
	{
		hours = new_hours;
	}
	void set_day(unsigned short new_day)
	{
		day = new_day;
	}
	void set_month(unsigned short new_month)
	{
		month = new_month;
	}
	void set_years(unsigned short new_years)
	{
		years = new_years;
	}
	void show_info()
	{
		cout << "Seconds=> " << seconds << "\nMinutes=> " << minutes << "\nHours=> " << hours << "\nDay=> " << day << "\nMonth=> " << month << "\nYear=> " << years<<endl;
		system("pause");
	}
};

int main()
{
	time_ obj;
	unsigned short var=0;
	unsigned short seconds=0;
	unsigned short minutes = 0;
	unsigned short hours = 0;
	unsigned short day = 0;
	unsigned short month = 0;
	unsigned short years = 0;
	while (true)
	{
		system("cls");
		cout << "Enter class=> 1\nShow info=> 2\nExit=>0\n";
		cin >> var;
		if (var == 0)
		{
			break;
		}
		else if (var == 1)
		{
			cout << "Seconds=>";
			cin >> seconds;
			cout << "minutes=>";
			cin >> minutes;
			cout << "hours=>";
			cin >> hours;
			cout << "day=>";
			cin >> day;
			cout << "month=>";
			cin >> month;
			cout << "year=>";
			cin >> years;
			obj.set_seconds(seconds);
			obj.set_minutes(minutes);
			obj.set_hours(hours);
			obj.set_day(day);
			obj.set_month(month);
			obj.set_years(years);
		}
		else if (var == 2)
		{
			obj.show_info();
		}
		else
		{
			cout << "Eror!!!\n";
			Sleep(2);
		}
	}
	//system("pause");
	return 0;
}