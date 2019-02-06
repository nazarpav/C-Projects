//1. Написать программу, реализующую игру "21".Действия по выдаче очередной карты игроку и компьютеру реализуйте в виде функции
#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
using namespace std;
const int cards[13]{ 2,3,4,5,6,7,8,9,10,2,3,4,11 };
int player[10]{}, comp[10]{};
int indexxuser = 0, indexxcomp = 0, sum = 0, sum2 = 0;

void randcards()
{
	while(2!=indexxcomp)
	{
		player[indexxuser] = rand() % 13;
		comp[indexxcomp] = rand() % 13;
		indexxcomp++;
		indexxuser++;

	}
}
void randcardscomp()
{
		comp[indexxcomp] = rand() % 13;
		indexxcomp++;
}
void randcardsplayer()
{
		player[indexxuser] = rand() % 13;
		indexxuser++;
}
void yourpoint()
{
	sum = 0;
	cout << "your point :: ";
	for (short i = 0; i < indexxuser; i++)
	{
		cout << cards[player[i]] << "+";
		sum += cards[player[i]];
	}
	cout << "\b";
	cout << "("<<sum<<")"<<endl;
}
void comppoint()
{
	sum2 = 0;
	for (short i = 0; i < indexxcomp; i++)
	{
		sum2 += cards[comp[i]];
	}
}
void foo()
{
	char variableplayer;
	short variablecomp = 0;
	while (true)
	{
		system("cls");
		yourpoint();
		cout <<endl<< "pull Cards& y/n :: ";
		cin >> variableplayer;
		comppoint();
		if (sum2 > 16)
		{
			variablecomp = rand() % 1 + 2;
		}
		else
		{
			variablecomp = 1;
		}
		 if (variableplayer == 'y')
		{
			randcardsplayer();
		}
		if (variablecomp == 1)
		{
			randcardscomp();
		}
		if (variableplayer == 'n'&&variablecomp == 2)
		{
			break;
		}
	}
	comppoint();
	if (sum == sum2)
	{
		cout << "nichiya\n\ncomp score "<<"("<<sum2<<")"<<endl;
	}
	else if (sum ==21)
	{
		cout << "Your WIN\n\ncomp score" << "(" << sum2 << ")" << endl;
	}	
	else if (sum2 == 21)
	{
		cout << "Comp WIN\n\ncomp score" << "(" << sum2 << ")" << endl;
	}	
	else if (sum2 < sum)
	{
		cout << "Comp WIN\n\ncomp score" << "(" << sum2 << ")" << endl;
	}
	else if (sum2 > sum)
	{
		cout << "User WIN\n\ncomp score" << "(" << sum2 << ")" << endl;
	}
	else
	{
		cout << "eror" << endl;
	}
}
int main()
{
	srand(unsigned(time(NULL)));
	cout << "hello game 21///////////////////////////////////////////\n\n";
	cout << "generation cards";
	for (short i = 0; i < 3; i++)
	{
		Sleep(250);
		cout << ".";
	}
	cout << endl;
	system("cls");
	randcards();
	foo();

	system("pause");
	return 0;
}