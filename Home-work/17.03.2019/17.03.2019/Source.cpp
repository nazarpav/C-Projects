/*   �������� ��������� ��������������.������������ ������ ��� ������ ��� ������� �������.
//	������ � ������, ���������� � ����.�����.������� ��� ���������� � ����� ������� ������.� ���������� ������ ���� 10 ������� ������.
//	����������� ���� ��� ������������.������������� ��� ������, ���������� �� ������� ��� ������ �����.
//	��������� ������ ������ �����������.������ ���� math[0] = 5 � engl[0] = 8 �� ����� ���������� ������� � �������� �� ����������,
//	������� ������ ������ ��� �� ������ ����������.
//	����� ������(����� ����������� �������)
//	��������� ��������(������������ ������ ����� �������� ������� � ����� ������)
//	������� �� ���������(��������� �������, ���� ������� ��� �� ���� 10.7)
//	������� ��� ������ ������ ��������� ������� �� ����������� �����.
//	������� ��� ������ ������ ����������� ������� � ������
//	������� ��� ������ ������ ��������� ������� � ������ ����(������ � ����������).*/
#include <iostream>
#include<ctime>
using namespace std;


void print(int aseesments[], int *examaseesments, int *sizechild,char predm[])
{
	int iterator = *sizechild;
	for (short i = 0; i < *sizechild; i++)
	{
		cout << "students "<<iterator<<" has assesmetn by " << predm[1]<<">" << aseesments[i] << endl;
		iterator--;

	}
}

void inputassesm(int aseesments[], int *examaseesments, int *sizechild)
{
	for (short i = 0; i < *sizechild; i++)
	{
		cout << "enter asesment " << i + 1 << ":: ";
		cin >> aseesments[i];

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
	char predm[3]{'Math','engl','phis'};
	int *aseesments = new int[sizechild];
	int *examaseesments = new int[sizechild];
	int *averageasesment = new int[sizechild];//avarage assesments learner
	int *indexArr = new int[sizechild];//saved index
	int b = 0;
	while (b != 1)
	{
		cout << "====================================*************PROGRAM LEADERS***************=======================================\n";
		inputassesm(aseesments, examaseesments, &sizechild);
		print(aseesments, examaseesments, &sizechild,predm);
		b = 1;
	}
	system("pause");
	return 0;
}