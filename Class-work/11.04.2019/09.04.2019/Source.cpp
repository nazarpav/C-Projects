/*C++ 
Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню 

розбити проект на файл основної програми (.cpp), файл реалізації функцій (.cpp) та заголовочний файл (.h)) */
#include <iostream>
#include <conio.h>
#include <ctime>
#include <fstream>
#include "Arrs.h"
#include <string>
using namespace std;
class menu
{
public:
	void MenuPrivate(int*&p_arr,unsigned short &size,bool &var)
	{
		unsigned short choise = 1;
		char ControlSymbol{};
		const unsigned short sizemenu = 7;
		string menu[sizemenu]
		{
			"fill arr",
			"print arr",
			"delete arr item",
			"add arr item",
			"add arr item for index",
			"del arr item for index",
			"EXIT"
		};
		while (ControlSymbol != 13)
		{
			ControlSymbol = _getch();
			if (ControlSymbol != 119 && ControlSymbol != 115)
			{
				continue;
			}
			else
			{
				ControlSymbol == 119 ? choise-- : choise++;
				if (choise == 0)
				{
					choise++;
					continue;
				}
				else if (choise > sizemenu)
				{
					choise--;
					continue;
				}
			}
			system("cls");
			for (unsigned short i = 0; i < sizemenu; i++)
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
			fill_arr(p_arr,size);
			break;
		case 2:
			print_arr(p_arr, size);
			break;
		case 3:
			p_arr=del_arr_item(p_arr, size);
			break;
		case 4:
			p_arr = add_arr_item(p_arr, size);
			break;
		case 5:
			unsigned short index;
			cout << "enter index> ";
			cin >> index;
			p_arr = add_arr_item_ind(p_arr, size,index);
			break;
		case 6:
			unsigned short indevx;
			cout << "enter index> ";
			cin >> indevx;
			p_arr = del_arr_item_ind(p_arr, size, indevx);
			break;
		case 7:
			var = true;
			break;
		default:
			cout << "Eror!!!\n";
			break;
		}
	}
public:
	void Menu(int*&p_arr, unsigned short &size, bool &var)
	{
		MenuPrivate(p_arr, size, var);
	}
};
int main()
{
	srand(unsigned(time(NULL)));
	unsigned short size = 0;
	bool var = false;
	cout << "Enter arr size>";
	cin >> size;
	cout << endl;
	int *p_arr = new int[size];
	menu menushka;
	while (var == false)
	{
		menushka.Menu(p_arr, size, var);
	}
	return 0;
}