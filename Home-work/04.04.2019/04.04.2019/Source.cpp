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
	string firstname;
	string surname;
	unsigned short age;
	unsigned short date_of_birth_day;
	unsigned short date_of_birth_mouth;
	unsigned short date_of_birth_year;
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
void show_info(Human* p_human, unsigned short size)
{
	for (unsigned short i = 0; i < size; i++)
	{
		cout <<"Index>>>>>>>>>>=> "<< i << endl;
		cout << "first name>" + p_human[i].get_first_name() + "\nsecond name>" + p_human[i].get_second_name() + "\nage>" + to_string(p_human[i].get_age()) + "(" + to_string(p_human[i].get_date_of_birth_day()) + "." + to_string(p_human[i].get_date_of_birth_mount()) + "." + to_string(p_human[i].get_date_of_birth_year()) + ")\n";
	}
}
Human* newHuman(Human* p_human, unsigned short &size)
{
	Human* new_human = new Human[size+1];
	string new_firstname;
	string new_surname;
	unsigned short new_age;
	unsigned short new_date_of_birth_day;
	unsigned short new_date_of_birth_mouth;
	unsigned short new_date_of_birth_year;
	for (int i = 0; i < size; i++)
	{
		new_human[i] = p_human[i];
	}
	delete[] p_human;
	cout << "\nEnter first name: ";
	cout << new_human << endl;
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
		cout <<"index > "<< i << endl;
		cout <<"name > "<< p_human[i].get_first_name()<<endl;
		cout <<"sur name > "<< p_human[i].get_second_name();
		cout << endl;
		cout << endl;
	}
	cout << "Enter index>";
	cin >> tmp;
	cout << endl;
	short index = 0;
	for (int i = 0; i < size; i++)
	{
		if (i == tmp) 
		{
			continue;
		}
		else
		{
			new_human[index] = p_human[i];
			index++;
		}
	}
	delete[] p_human;
	size--;
	return new_human;
}
void search_pupil_month(Human* p_human,unsigned short month , unsigned short &size)
{
	for (unsigned short i = 0; i < size; i++)
	{
		if (to_string(p_human[i].get_date_of_birth_mount()) == to_string(month))
		{
			cout << "NAME> " << p_human[i].get_first_name()<<endl;
		}
		else
		{
			cout << "Not found" << i + 1 << endl;;
		}
	}
}
string search_pupil(Human* p_human,string firstname,string surname,unsigned short &size)
{
	for (unsigned short i = 0; i < size; i++)
	{
		if (firstname == p_human[i].get_first_name() && surname == p_human[i].get_second_name())
		{
			return"Great!!!";
		}
		else
		{
			return"Not found";
		}
	}
}
void redact_info(Human* p_human,unsigned short size, unsigned short ind)
{
	string new_firstname;
	string new_surname;
	unsigned short new_age;
	unsigned short new_date_of_birth_day;
	unsigned short new_date_of_birth_mouth;
	unsigned short new_date_of_birth_year;
	cout << "\nEnter first name: ";
	cin >> new_firstname;
	p_human[ind].set_first_name(new_firstname);
	cout << "\nEnter second name: ";
	cin >> new_surname;
	p_human[ind].set_second_name(new_surname);
	cout << "\nEnter age: ";
	cin >> new_age;
	p_human[ind].set_age(new_age);
	cout << "\nEnter you birth day: ";
	cin >> new_date_of_birth_day;
	p_human[ind].set_date_of_birth_day(new_date_of_birth_day);
	cout << "\nEnter you birth month: ";
	cin >> new_date_of_birth_mouth;
	p_human[ind].set_date_of_birth_mouth(new_date_of_birth_mouth);
	cout << "\nEnter you birth year: ";
	cin >> new_date_of_birth_year;
	p_human[ind].set_date_of_birth_year(new_date_of_birth_year);
	cout << endl;
}
class menu
{
public:
	void Menu_Private(Human* &p_human, unsigned short &size, bool &var)
	{
		unsigned short choise = 3;
		unsigned short ind = 0;
		char Control_Symbol{};
		const unsigned short size_menu = 7;
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
			"Redact info",
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
			show_info(p_human,size);
			break;
		case 2:
			cout << "Enter month>";
			cin >> month;
			search_pupil_month(p_human, month, size);
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
			cout << search_pupil(p_human, firstname, surname, size);
			break;
		case 6:
			cout << "Enter index to redact>";
			show_info(p_human, size);
			cin >> ind;
			redact_info(p_human, size,ind);
			break;
		case 7:
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
	bool var = false;
	cout << "Enter size> ";
	cin >> size;
	cout << "Conrtrol menu only 'w'^ 's'v !!!!";
	Human * human = new Human[size];
	while (var == false)
	{
		Menu.Menu_Private(human, size, var);
	}
	delete[] human;
	return 0;
}