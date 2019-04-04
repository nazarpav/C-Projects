/*Описати структуру «Людина». Передбачити: 

Заповнення масиву людей 
Вивід інформації з сортуванням по прізвищу та імені 
Вивід списку іменників місяця з вказанням дати народження 
Зміна розміру масиву при додаванні та видаленнні записів 
Пошук по прізвищу та імені 
Редагування запису 
Роботу організувати через меню. Пункти меню обовязково є типами перелічуваної константи. */
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Human {
	string first_name="sssfd";
	string second_name="dsfdfs";
	unsigned short age=12;
	unsigned short date_of_birth_day=12;
	unsigned short date_of_birth_mouth=6;
	unsigned short date_of_birth_year=1993;
	void set_first_name(string new_first_name)
	{
		first_name = new_first_name;
	}
	void set_second_name(string new_second_name)
	{
		second_name = new_second_name;
	}
	void set_age(unsigned short new_age)
	{
		age = new_age;
	}
	void set_date_of_birth_day(unsigned short new_date_of_birth_day)
	{
		date_of_birth_day = new_date_of_birth_day;
	}
	void set_date_of_birth_mouth(unsigned short new_date_of_birth_mouth)
	{
		date_of_birth_mouth = new_date_of_birth_mouth;
	}
	void set_date_of_birth_year(unsigned short new_date_of_birth_year)
	{
		date_of_birth_year = new_date_of_birth_year;
	}
	string get_first_name()
	{
		return  first_name;
	}
	string get_second_name()
	{
		return second_name;
	}
	unsigned short get_age()
	{
		return age;
	}
	unsigned short set_date_of_birth_day()
	{
		return date_of_birth_day;
	}
	unsigned short set_date_of_birth_mount()
	{
		return date_of_birth_mouth;
	}
	unsigned short set_date_of_birth_year()
	{
		return date_of_birth_year;
	}
	string show_info()
	{
		return "first name>" + first_name + "\nsecond name>" + second_name + "\nage>" + to_string(age) + "(" + to_string(date_of_birth_day) + "." + to_string(date_of_birth_mouth) + "." + to_string(date_of_birth_year) + ")\n";
	}

};

int main() {
	Human human;


	cout << human.show_info();

	system("pause");
	return 0;
}