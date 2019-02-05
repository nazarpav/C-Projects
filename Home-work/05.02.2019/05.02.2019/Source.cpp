/*2. Rock, Paper, Scissors Game.Write a program that lets the user play the game of Rock, Paper, Scissors against the computer.The program should work as follows.
1. When the program begins, a random number in the range of 1 through 3 is generated.If the number is 1, then the computer has chosen rock.If the number is 2,
then the computer has chosen paper.If the number is 3, then the computer has chosen scissors. (Don’t display the computer’s choice yet.)
2. The user enters his or her choice of rock, paper, or scissors at the keyboard.
(You can use a menu if you prefer.)
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules :
	If one player chooses rock and the other player chooses scissors, then rock
wins. (The rock smashes the scissors.)
	If one player chooses scissors and the other player chooses paper, then scissors
wins. (Scissors cuts paper.)
	If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)*/



#include <iostream>
#include <ctime>
using namespace std;


void CompVariable(int variableUser)
{
	int VariableComp=0;
	VariableComp = rand() % 3 + 1;
	if (variableUser == 1)
	{
		if (VariableComp == 1)
		{
			cout << "nichiya" << endl;
		}
		else if (VariableComp == 2)
		{
			cout << "comp Win" << endl;
		}
		else if (VariableComp == 3)
		{
			cout << "user Win" << endl;
		}
	}
	else if (variableUser == 2)
	{
		if (VariableComp == 1)
		{
			cout << "user Win" << endl;
		}
		else if (VariableComp == 2)
		{
			cout << "nichiya" << endl;
		}
		else if (VariableComp == 3)
		{
			cout << "comp Win" << endl;
		}
	}
	else if (variableUser == 3)
	{
			if (VariableComp == 1)
			{
				cout << "comp Win" << endl;
			}
			else if (VariableComp == 2)
			{
				cout << "user Win" << endl;
			}
			else if (VariableComp == 3)
			{
				cout << "nichiya" << endl;
			}
	}
}
int main()
{
	srand(unsigned(time(NULL)));
	int variable = 0;
	while (variable!=4)
	{
		system("pause");
		system("cls");
		cout << "paper-1;\nscissors-2;\na rock-3;\nEXIT PROGRAM-4\n::";
		cin >> variable;
		CompVariable(variable);
	}
	system("pause");
	return 0;
}





/*1. На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10(оцінка може бути дробовим числом). 
Знайти підсумкову оцінку кожного учасника, яка обчислюється як середнє арифметичне, але без врахування найкращої та 
найгіршої оцінок. Виконати задачу з розбиттям на функції.*/



//#include <iostream>
//#include <ctime>
//using namespace std;
//
/////////////////////////////////////////////
//
//int const QuantityAssessment = 5;////<-----------------------------
//int const QuantityParticipant = 3;////<---------------------------=
//int arr[QuantityParticipant][QuantityAssessment]{};
//int SumArr[QuantityParticipant]{};
//
//
////////////////////////////////////////////////
//
//
//
//void OperationsVithAssessment()
//{
//	 int BUFMin = 2147483646;
//	 int BUFMax = 0;
//	 int BufIndex = 0;
//	 short j = 0;
//	 for (short i = 0; i < QuantityParticipant; i++)
//	 {
//		 for (j = 0; j < QuantityAssessment; j++)
//		 {
//			 if (BUFMin > arr[i][j])
//			 {
//				 BUFMin = arr[i][j];
//				 BufIndex = j;
//			 }
//
//		 }
//		 arr[i][BufIndex] = 0;
//	 }
//	 for (short i = 0; i < QuantityParticipant; i++)
//	 {
//		 for (j = 0; j < QuantityAssessment; j++)
//		 {
//			 if (BUFMax < arr[i][j])
//			 {
//				 BUFMax = arr[i][j];
//				 BufIndex = j;
//			 }
//
//		 }
//		 arr[i][BufIndex] = 0;
//	 }
//	 for (short i = 0; i < QuantityParticipant; i++)
//	 {
//		 for (j = 0; j < QuantityAssessment; j++)
//		 {
//			 SumArr[i] += QuantityAssessment;
//		 }
//		 SumArr[i] /= QuantityAssessment - 2;
//	 }
//}
//
// void PrintAssessments()
// {
//	 system("cls");
//	 for (short i = 0; i < QuantityParticipant; i++)
//	 {
//		 cout << "Participant -  " << i + 1 << " " << SumArr[i] << endl;
//	 }
// }
//
//void EnterAssessment()
//{
//	int BUFFAssessment = 1;
//	int BUFFParticipant = 1;
//
//	for (short j = 0; j < QuantityParticipant; j++)
//	{
//		system("cls");
//		for (short i = 0; i < QuantityAssessment; i++)
//		{
//			cout << "Enter assesments\n\tParticipant-" << BUFFParticipant << "\n\tAssessment-" << BUFFAssessment<<"\n:: ";
//			cin >> arr[j][i];
//			BUFFAssessment++;
//		}
//		BUFFAssessment = 1;
//		BUFFParticipant++;
//	}
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	EnterAssessment();
//	OperationsVithAssessment();
//	PrintAssessments();
//	system("pause");
//	return 0;
//}