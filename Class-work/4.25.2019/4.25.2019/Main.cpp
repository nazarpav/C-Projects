#include<iostream>
#include<ctime>
#include<string>
#include <fstream>
#include <windows.h>
using namespace std;

unsigned short verification()
{
	const unsigned short quantity_user=3;
	string verifi[quantity_user][3];
	ofstream file;
	string login{};
	string password{};
	unsigned short user_id;
	string path = "password.txt";
	unsigned i = 0, j = 0;
	for (unsigned short i = 0; i < 3; i++)
	{
		ifstream readFile;
		readFile.open(path);

		if (!readFile.is_open()) {
			cout << "Can't open file!" << endl;
		}
		else {
			char data;
			while (readFile.get(data)) {
				if (data != ' '&&data != '_'&&data!='.')
				{
					verifi[j][i] += data;
				}
				else if(data == ' ')
				{
					i++;
				}
				else if (data == '_')
				{
					j++;
					i = 0;
				}
				else if(data=='.')
				{
					break;
				}
			}
			readFile.close();
			cout << "enter login-> ";
			cin >> login;
			unsigned short g = 0;
			for (int i = 0; i < quantity_user; i++)
			{
				if (verifi[i][0] == login)
				{
					while (g != 4)
					{
						if (g == 4)
						{
							return 0;
						}
						cout << "Enter password->";
						cin >> password;
						if (verifi[i][1] == password)
						{
							cout << "Great!";
							Sleep(1000);
							if (verifi[i][2] == "admin")
							{
								return 1;
							}
							else if (verifi[i][2] == "user")
							{
								return 2;
							}
						}
						else
						{
							cout << "Eror!<" << 3-g << ">";
							Sleep(500);
							g++;
						}
					}
				}
			}
		}
	}
}
int main()
{
	srand(unsigned(time(NULL)));
	unsigned short access_specifier = 0;
	access_specifier=verification();
	system("cls");
	if (access_specifier == 0)
	{
		return 0;
	}
	else if (access_specifier == 1)
	{
		cout << "ADMIN<\n\nShow info--> 1\nRedact info-->2\nAdd info-->3\nDelete info-->4\n";
	}
	else if (access_specifier == 2)
	{
		cout << "User<\n\nShow info--> 1\n";
	}
	else
	{
		cout << "Eror!!!";
	}
	system("pause");
	return 0;
}