/*ООП 
Написати клас "Банківський рахунок" (Account), який містить: 
Номер рахунку 
Розмір коштів на рахунку 
Назва валюти рахунку (рублі, гривні, евро тощо), для позначення якої можна скористатись одним символом: R, G, E, $ тощо 
Забезпечити можливість: 
Відкривати рахунок та первинно вносити гроші на рахунок 
Знімати гроші з рахунку 
Докладати гроші на рахунок */
#include <iostream>
#include<string>
#include<ctime>
#include<windows.h>
using namespace std;
class Account
{
private:
	string number_account;
	short money_account;
	string name_money;
	string password;
public:
	void set_number_account(string new_number_account)
	{
		this->number_account = new_number_account;
	}
	void set_money_account(short new_money_account)
	{
		this->money_account = new_money_account;
	}
	void set_name_money(string new_name_money)
	{
		name_money = new_name_money;

	}
	void set_password(string new_passwd)
	{
		password = new_passwd;
	}
	string get_password()
	{
		return this->password;
	}
	string get_number_account()
	{
		 return this->number_account;
	}
	short get_money_account()
	{
		return this->money_account;
	}
	string get_name_money()
	{
		return this->name_money;
	}
	void show_info()
	{
		cout << "number account-> " << this->number_account << "\nmoney in account-> " << this->money_account<<"\nname money-> "<<this->name_money<<endl;
		Sleep(900);
		return;
	}
};


int main()
{
	unsigned short size = 1;
	Account *obj = new Account[size];
	bool var = false;
	short sale = 1;
	short new_money_account;
	string new_number_account;
	string name_money;
	cout << "enter number account->";
	cin >> new_number_account;
	obj[0].set_number_account(new_number_account);
	cout << "enter money in account->";
	cin >> new_money_account;
	obj[0].set_money_account(new_money_account);
	cout << "enter name money->";
	cin >> name_money;
	obj[0].set_name_money(name_money);
	system("cls");
	short choise = 0;
	while (var != true)
	{
		system("cls");
		cout << "Open new account -1 \nadd money to account -2 \ntake money -3\nshow info card -4\nset passwd-5\nexit-6\n>";
		cin >> choise;
		string account_number{};
		string password{};
		short money = 0;
		if (choise == 1)
		{
			size++;
			Account *newobj = new Account[size];
			for (short i = 0; i < size - 1; i++)
			{
				newobj[i] = obj[i];
			}
			delete[]obj;
			obj = newobj;
			cout << "enter number account->";
			cin >> new_number_account;
			obj[size - 1].set_number_account(new_number_account);
			cout << "enter money in account->";
			cin >> new_money_account;
			obj[size - 1].set_money_account(new_money_account);
			cout << "enter name money in account->";
			cin >> new_money_account;
			obj[size - 1].set_money_account(new_money_account);
			system("cls");
		}
		else if (choise == 2)
		{
			cout << "enter Account number->";
			cin >> account_number;
			for (short i = 0; i < size; i++)
			{
				if (obj[i].get_number_account() == account_number)
				{
					cout << "enter password->";
					cin >> password;
					if (password == obj[i].get_password())
					{
						cout << "enter money-> ";
						cin >> money;
						obj[i].set_money_account(money);
					}
					else
					{
						cout << "eror!\n";
					}
				}
			}
		}
		if (choise == 3)
		{
			cout << "enter Account number->";
			cin >> account_number;
			for (short i = 0; i < size; i++)
			{
				if (obj[i].get_number_account() == account_number)
				{
					cout << "enter password->";
					cin >> password;
					if (password == obj[i].get_password())
					{
						cout << "enter money-> ";
						cin >> money;
						if (money > 1000)
						{
							sale++;
						}
						obj[i].set_money_account(((obj[i].get_money_account() - money) / 100) *(100 - sale));
					}
					else
					{
						cout << "eror!\n";
					}
				}
			}
		}
		if (choise == 4)
		{
			cout << "enter Account number->";
			cin >> account_number;
			for (short i = 0; i < size; i++)
			{
				if (obj[i].get_number_account() == account_number)
				{
					cout << "enter password->";
					cin >> password;
					if (password == obj[i].get_password())
					{
						obj[i].show_info();
					}
					else
					{
						cout << "eror!\n";
					}
				}
			}
		}
		if (choise == 5)
		{
			cout << "enter Account number->";
			cin >> account_number;
			for (short i = 0; i < size; i++)
			{
				if (obj[i].get_number_account() == account_number)
				{
					cout << "enter password->";
					cin >> password;
					obj[i].set_password(password);
				}
			}
		}
		if (choise == 6)
		{
			var = true;
			break;
		}
	}
		//system("pause");
		return 0;
	
}
/*Завдання 1. Класна робота
Створити клас "Точка" (Point), який складається з двох полів типу int: X та Y. Необхідно забезпечити: 
Введення координат точки користувачем 
Вивід інформації про точку на екран 
Можливість зміни будь-якої з координат на запит користувача (X або Y)  */
//#include <iostream>
//#include<string>
//#include<ctime>
//#include<windows.h>
//using namespace std;
//class Point
//{
//private:
//	short x;
//	short y;
//
//public:
//	void set_x(short new_x)
//	{
//		this->x=new_x;
//	}
//	void set_y(short new_y)
//	{
//		this->y = new_y;
//	}
//	void show_point()
//	{
//		cout << "coordination x -> " << x << "\ncoordination y -> " << y << endl;
//		Sleep (900);
//		return;
//	}
//};
//
//
//int main()
//{
//	/*Point obj;
//	char var{};
//	short x = 0, y = 0;
//	cout << "enter x->";
//	cin >>x;
//	obj.set_x(x);
//	cout << "enter y->";
//	cin >> y;
//	obj.set_y(y);
//	system("cls");
//	obj.show_point();
//	while (var != 'n')
//	{
//		system("cls");
//		cout << "RENAME x or y?(y/n)";
//		cin >> var;
//		if (var == 'y' || var == 'Y')
//		{
//			system("cls");
//			cout << "RENAME x or y?(x/y)";
//			cin >> var;
//			if (var == 'x')
//			{
//				cout << "enter x->";
//				cin >> x;
//				obj.set_x(x);
//			}
//			else if (var == 'y')
//			{
//				cout << "enter y->";
//				cin >> y;
//				obj.set_y(y);
//			}
//			system("cls");
//			obj.show_point();
//		}
//	}*/
//	volatile int a=0;
//	cout << a;
//	system("pause");
//	return 0;
//}