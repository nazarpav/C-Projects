/*
C++ 
Створити структуру, яка описує тварину (назва, клас, кличка). Створити функції для роботи з цією структурою (заповнення об’єкта,
вивід на екран даних про об’єкт, функція «подати голос»).  */
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

struct animal
{
	string title;
	string clas;
	string name;

	void settitle(string newtitle)
	{
		title = newtitle;
	}
	void setclas(string newclas)
	{
		clas = newclas;
	}
	void setname(string newname)
	{
		name = newname;
	}

	void gettitle()
	{
		cout <<"Title : > "<<title<<endl;
	}
	void getclas( )
	{
		cout << "Class : > " << clas << endl;
	}
	void getname()
	{
		cout << "Name : > " << name << endl;
	}

	void animalSay(string name)
	{
		cout << "your " << name << " sayed!"<<endl;
	}
};
int main()
{
	animal Animal;
	string var;
	cout << "set title > ";
	cin >> var;
	Animal.settitle(var);
	cout << "set class > ";
	cin >> var;
	Animal.setclas(var);
	cout << "set name > ";
	cin >> var;
	Animal.setname(var);

	Animal.gettitle();
	Animal.getclas();
	Animal.getname();

	Animal.animalSay("BOber");
	system("pause");
	return 0;
}