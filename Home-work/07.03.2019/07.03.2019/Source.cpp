/*   Написать программу «успеваемость».Пользователь вводит три оценки для каждого ученика.
//	Оценки с физики, математики и англ.языка.Средний бал записываем в масив средних баллов.В результате должно быть 10 средних баллов.
//	Реализовать меню для пользователя.Отсортировать тот массив, информация по котором нам сейчас нужна.
//	Связность оценок должна соблюдаться.Тоесть если math[0] = 5 и engl[0] = 8 то после сортировки массива с оценками за математику,
//	массивы других оценок так же должны поменяться.
//	Вывод оценок(вывод содержимого массива)
//	Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
//	Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10)
//	Вывести все оценки самого успешного ученика по английскому языку.
//	Вывести все оценки самого неуспешного ученика в классе
//	Вывести все оценки самого успешного ученика с точных наук(физика и математика).*/
#include <iostream>
#include<ctime>
#include<ctime>

using namespace std;

void print(char *learner[], int *assesments[], int examaseesments[], int &sizechild,char predm[3][255],int averageasesment[])
{
	system("cls");
	for (short i = 0; i < sizechild; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "(" << learner[i] << ") student has assesment for ("<<predm[j]<<")> " << assesments[i][j] << endl;
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < sizechild; i++)
	{
		cout << "(" << learner[i] << ") student has examassesment > " << examaseesments[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < sizechild; i++)
	{
		cout<<"agerage assesment for("<<learner[i]<<") - "<<averageasesment[i]<<endl;
	}
	cout << endl;
}

void inputassesm(char *learner[],int *assesments[], int examaseesments[],int &sizechild, char predm[3][255],int averageasesment[])
{
	for (short i = 0; i < sizechild; i++)
	{
		cout << "enter name students>" << i+1 << ":: ";
		cin >> learner[i];
		for (int j = 0; j < 3; j++)
		{
			//cout << "enter asesment "<<"("<<predm[j]<<")" << " >" << i + 1 << ":: ";
			//cin >> assesments[i][j];
			assesments[i][j] = rand() % 7 + 6;
		}
	}

	for (int i = 0; i < sizechild; i++)
	{
		//cout << "Enter exams assesment for (" << learner[i] << ")";
		//cin >> examaseesments[i]; 
		examaseesments[i] = rand() % 6 + 6;
	}
	for (int i = 0; i < sizechild; i++)
	{
		averageasesment[i] = 0;
		for (int j = 0; j < 3; j++)
		{
			averageasesment[i] += assesments[i][j];
		}
		averageasesment[i] /= 3;
	}
}
void retake_exam(char *learner[],int examaseesments[], int &sizechild)
{
	system("cls");
	int stuid=0;
	system("cls");
	for (int i = 0; i < sizechild; i++)
	{
		cout <<"( "<<i+1<< " ) (" << learner[i] << ") student has examassesment > " << examaseesments[i] << endl;
	}
	cout << endl;
	cout << "Enter students number > " << endl;
	cin >> stuid;
	cout << "enter assesment for " << learner[stuid-1] << " > ";
	cin >> examaseesments[stuid-1];
	for (int i = 0; i < sizechild; i++)
	{
		cout << "(" << learner[i] << ") student has examassesment > " << examaseesments[i] << endl;
	}
}

void minassesm(char *learner[], int *assesments[], int &sizechild, char predm[3][255], int averageasesment[])
{
	system("cls");
	int min = 2147483647;
	int indmin = 0;
	for (int i = 0; i < sizechild; i++)
	{
		if (averageasesment[i]<min)
		{
			min = averageasesment[i];
			indmin = i;
		}
	}
	cout << "(" << learner[indmin] << ") student has a minimal assesments > " << endl;
	for (int j = 0; j < 3; j++)
	{
		cout << "(" << learner[indmin] << ") student has assesment for (" << predm[j] << ")> " << assesments[indmin][j] << endl;
	}
	system("pause");
}

void maxassesmengl(char *learner[], int *assesments[], int &sizechild, char predm[3][255])
{
	system("cls");
	int max=-1;
	int indmin = 0;
	for (int i = 0; i < sizechild; i++)
	{
		if (assesments[1][i] > max)
		{
			max = assesments[1][i];
			indmin = i;
		}
	}
	cout << "(" << learner[indmin] << ") student has a maximum assesments for english > " << learner[indmin] << endl;
	for (int j = 0; j < 3; j++)
	{
		cout << "(" << learner[indmin] << ") student has assesment for (" << predm[j] << ")> " << assesments[indmin][j] << endl;
	}
	system("pause");
}

void maxassesmphismath(char *learner[], int *assesments[], int &sizechild, char predm[3][255])
{
	system("cls");
	int maxmath = -1;
	int maxphis = -1;
	int indminphis = 0;
	int indminmath = 0;
	for (int i = 0; i < sizechild; i++)
	{
		if (assesments[0][i] > maxmath)
		{
			maxmath = assesments[0][i];
			indminmath = i;
		}
		if (assesments[2][i] > maxphis)
		{
			maxphis = assesments[2][i];
			indminphis = i;
		}
	}

	cout <<endl<< "(" << learner[indminphis] << ") has a maximum assesments for mathematik > " << learner[indminmath] << endl;
	for (int j = 0; j < 3; j++)
	{
		cout << "(" << learner[indminmath] << ") student has assesment for (" << predm[j] << ")> " << assesments[indminmath][j] << endl;
	}
	cout <<endl << "(" << learner[indminphis] << ") has a maximum assesments for physics > " << learner[indminphis] << endl;
	for (int j = 0; j < 3; j++)
	{
		cout << "(" << learner[indminphis] << ") student has assesment for (" << predm[j] << ")> " << assesments[indminphis][j] << endl;
	}
	system("pause");
}

void scholarship(char *learner[], int *assesments[], int &sizechild, char predm[3][255], int averageasesment[])
{
	system("cls");
	int ind = 0;
	for (int i = 0; i < sizechild; i++)
	{
		cout << "( " << i + 1 << " ) (" << learner[i]<<")"<< endl;
	}
	cout << "\n_____________________________________________________________________________________\n";
	cout << "Select student > ";
	cin >> ind;
	cout << endl;
	if (averageasesment[ind] >= 10)
	{
		cout << "You HAVE MONEY!!!";
	}
	else
	{
		cout << "Sorry your average assessment is small(\n";
	}
	system("pause");
}

int main()
{
	srand(unsigned(time(NULL)));
	int sizechild = 0;
	cout << "How mach students - ";
	cin >> sizechild;
	system("cls");
	char predm[][255] = {"Mathematik","english","physics"};
	int *examaseesments=new int[sizechild];
	int *averageasesment = new int[sizechild];//avarage assesments learner
	int *indexArr = new int[sizechild];//saved index
	int b = 0;
	int variable = 0;
	char var='n';
	char **learner = new char *[sizechild];
	for (int i = 0; i < sizechild; i++) {
		learner[i] = new char[sizechild];
	}
	int **assesments = new int *[sizechild];
	for (int i = 0; i < sizechild; i++) {
		assesments[i] = new int[sizechild];
	}
	inputassesm(learner, assesments, examaseesments, sizechild, predm, averageasesment);
	while (true)
	{
		system("cls");
		cout<<"====================================*************PROGRAM LEADERS***************=======================================\n";
		print(learner, assesments, examaseesments, sizechild, predm, averageasesment);
		cout << endl;
		cout << "Print assessment > 1\nRetake assessment exam > 2\nStudent with a minimum assessment > 3\nStudent with a maximum english assessment > 4\nStudent with a maximum math and physics assessment > 5\nWill the student get a scholarship > 6\n" << endl;
		cin >> variable;
		if (variable == 1)
		{
			print(learner, assesments, examaseesments, sizechild, predm, averageasesment);
		}
		else if(variable == 2)
		{
			retake_exam(learner, examaseesments, sizechild);
		}
		else if (variable == 3)
		{
			minassesm(learner, assesments, sizechild, predm, averageasesment);
		}
		else if (variable == 4)
		{
			maxassesmengl(learner, assesments, sizechild, predm);
		}
		else if (variable == 5)
		{
			maxassesmphismath(learner, assesments, sizechild, predm);
		}
		else if (variable == 6)
		{
			scholarship(learner, assesments, sizechild, predm, averageasesment);
		}
		else
		{
			cout << "EROR!!!\n";
		}
		cout << "Exit? y/n";
		cin >> var;
		if (var == 'y')
		{
			break;
		}
	}
	return 0;
}