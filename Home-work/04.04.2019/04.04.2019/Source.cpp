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
#include <conio.h>
using namespace std;

struct Human {
	string firstname="0000";
	string surname="1111";
	unsigned short age=12;
	unsigned short date_of_birth_day=12;
	unsigned short date_of_birth_mouth=6;
	unsigned short date_of_birth_year=1993;
	void set_first_name(string new_first_name)
	{
		firstname = new_first_name;
	}
	void set_second_name(string new_second_name)
	{
		surname = new_second_name;
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
		return firstname;
	}
	string get_second_name()
	{
		return surname;
	}
	unsigned short get_age()
	{
		return age;
	}
	unsigned short get_date_of_birth_day()
	{
		return date_of_birth_day;
	}
	unsigned short get_date_of_birth_mount()
	{
		return date_of_birth_mouth;
	}
	unsigned short get_date_of_birth_year()
	{
		return date_of_birth_year;
	}
};
string show_info()
{
	Human human;
	return "first name>" + human.get_first_name() + "\nsecond name>" + human.get_second_name() + "\nage>" + to_string(human.get_age()) + "(" + to_string(human.get_date_of_birth_day()) + "." + to_string(human.get_date_of_birth_mount()) + "." + to_string(human.get_date_of_birth_year()) + ")\n";
}
Human* newHuman(Human* p_human, unsigned short &size)
{
	Human* new_human = new Human[size];
	string new_firstname = "0000";
	string new_surname = "1111";
	unsigned short new_age = 12;
	unsigned short new_date_of_birth_day = 12;
	unsigned short new_date_of_birth_mouth = 6;
	unsigned short new_date_of_birth_year = 1993;
	for (int i = 0; i < size; i++)
	{
		new_human[i] = p_human[i];
	}
	delete[] p_human;
	cout << "\nEnter first name: ";
	cin >> new_firstname;
	new_human[size].set_first_name(new_firstname);
	cout << "\nEnter second name: ";
	cin >> new_surname;
	new_human[size].set_second_name(new_surname);
	cout << "\nEnter age: ";
	cin >> new_age;
	new_human[size].set_age(new_age);
	cout << "\nEnter you birth day: ";
	cin >> new_date_of_birth_day;
	new_human[size].set_date_of_birth_day(new_date_of_birth_day);
	cout << "\nEnter you birth month: ";
	cin >> new_date_of_birth_mouth;
	new_human[size].set_date_of_birth_mouth(new_date_of_birth_mouth);
	cout << "\nEnter you birth year: ";
	cin >> new_date_of_birth_year;
	new_human[size].set_date_of_birth_year(new_date_of_birth_year);
	cout << endl;
	size ++;
	return new_human;

}
Human* delHuman(Human* p_human, unsigned short &size)
{
	Human* new_human = new Human[size];
	unsigned short tmp;
	for (unsigned short i = 0; i < size; i++)
	{
		cout << i << endl;
		cout << p_human[i].get_first_name()<<endl;
		cout << p_human[i].get_second_name();
		cout << endl;
	}
	cout << "Enter index>";
	cin >> tmp;
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		if (i == tmp)
		{
			continue;
		}
		else
		{
			new_human[i] = p_human[i];
		}
	}
	delete[] p_human;
	size--;
	return new_human;

}
string search_pupil(string firstname,string surname,unsigned short &size)
{
	Human human;
	for (unsigned short i = 0; i < size; i++)
	{
		if (firstname == human.get_first_name() && surname == human.get_second_name())
		{
			return"Great!!!";
		}
		else
		{
			return"Not found";
		}
	}
}
class menu
{
public:
	void Menu_Private(Human* p_human, unsigned short &size,bool &var)
	{
		unsigned short choise = 3;
		char Control_Symbol{};
		const unsigned short size_menu = 6;
		unsigned short month = 0;
		string firstname;
		string surname;
		string menu[size_menu]
		{
			"Show ALL pupil",
			"Show a list of nouns of the month indicating the date of birth",
			"Add new pupil",
			"Delete pupil",
			"Search by surname and name",
			"EXIT"
		};
		while (Control_Symbol != 13)
		{
			Control_Symbol = _getch();
			if (Control_Symbol != 119 && Control_Symbol != 115)
			{
				continue;
			}
			else
			{
				Control_Symbol == 119 ? choise-- : choise++;
				if (choise == 0)
				{
					choise++;
					continue;
				}
				else if (choise > size_menu)
				{
					choise--;
					continue;
				}
			}
			system("cls");
			for (unsigned short i = 0; i < size_menu; i++)
			{
				if (i + 1 == choise)
				{
					cout << "[ " << menu[i] << " ]" << endl;
					continue;
				}
				cout << menu[i] << endl;
			}

		}
		switch (choise)
		{
		case 1:
			system("cls");
			cout<<show_info();
			break;
		case 2:
			cout << "Enter month>";
			cin >> month;
			break;
		case 3:
			p_human = newHuman(p_human, size);
			break;
		case 4:
			p_human = delHuman(p_human, size);
			break;
		case 5:
			cout << "Enter firstname> ";
			cin >> firstname;
			cout << "Enter surname> ";
			cin >> surname;
			cout<<search_pupil(firstname, surname, size);
			break;
		case 6:
			var = true;
			break;
		default:
			cout << "Eror!!!\n";
			break;
		}
	}
};
int main()
{
	unsigned short size = 0;
	menu Menu;
	bool var=false;
	cout << "Enter size> ";
	cin >> size;
	Human * human = new Human[size];
	while (var==false)
	{
		Menu.Menu_Private(human, size, var);
	}
	delete[] human;
	return 0;
}