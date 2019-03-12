/*   Написать программу «успеваемость».Пользователь вводит три оценки для каждого ученика.
//	Оценки с физики, математики и англ.языка.Средний бал записываем в масив средних баллов.В результате должно быть 10 средних баллов.
//	Реализовать меню для пользователя.Отсортировать тот массив, информация по котором нам сейчас нужна.
//	Связность оценок должна соблюдаться.Тоесть если math[0] = 5 и engl[0] = 8 то после сортировки массива с оценками за математику, 
//	массивы других оценок так же должны поменяться.
//	Вывод оценок(вывод содержимого массива)
//	Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
//	Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
//	Вывести все оценки самого успешного ученика по английскому языку.
//	Вывести все оценки самого неуспешного ученика в классе
//	Вывести все оценки самого успешного ученика с точных наук(физика и математика).*/
#include <iostream>
#include<ctime>
using namespace std;

void print(string *learner[], int *aseesments[], int *examaseesments, int *sizechild)
{
	for (short i = 0; i < *sizechild; i++)
	{
		cout << learner[i] << "students has assesmetn>" << *aseesments[i]<<endl;

	}
}

void inputassesm(string *learner[],int *aseesments[], int *examaseesments,int *sizechild)
{
	char tmp;
	for (short i = 0; i < *sizechild; i++)
	{
		cout << "enter name students>" << i+1 << ":: ";
		cin >> tmp;
	    *learner[i] = tmp;
		cout << "enter asesment "<< learner[i]<<" >" << i + 1 << ":: ";
		cin >> *aseesments[i];

	}
}


int main()
{
	srand(unsigned(time(NULL)));
	int sizechild = 0;
	const int examassesment = 1;
	cout << "How mach students - ";
	cin >> sizechild;
	system("cls");
	const int assesment = 3;
	enum predm {Math=1,engl,phis};
	int *aseesments=new int[sizechild];
	int *examaseesments=new int[sizechild];
	int *averageasesment = new int[sizechild];//avarage assesments learner
	string *learner = new string[sizechild];//learner
	int *indexArr = new int[sizechild];//saved index
	int b = 0;
	while (b!=1)
	{
		cout<<"====================================*************PROGRAM LEADERS***************=======================================\n";
		inputassesm(&learner, &aseesments, examaseesments, &sizechild);
		print(&learner, &aseesments, examaseesments, &sizechild);
		b = 1;
	}
	system("pause");
	return 0;
}