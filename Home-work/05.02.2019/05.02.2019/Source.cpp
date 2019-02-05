#include <iostream>
#include <ctime>
using namespace std;

///////////////////////////////////////////

int const QuantityAssessment = 5;////<-----------------------------
int const QuantityParticipant = 3;////<---------------------------=
int arr[QuantityParticipant][QuantityAssessment]{};
int SumArr[QuantityParticipant]{};


//////////////////////////////////////////////



void OperationsVithAssessment()
{
	 int BUFMin = 2147483646;
	 int BUFMax = 0;
	 int BufIndex = 0;
	 short j = 0;
	 for (short i = 0; i < QuantityParticipant; i++)
	 {
		 for (j = 0; j < QuantityAssessment; j++)
		 {
			 if (BUFMin > arr[i][j])
			 {
				 BUFMin = arr[i][j];
				 BufIndex = j;
			 }

		 }
		 arr[i][BufIndex] = 0;
	 }
	 for (short i = 0; i < QuantityParticipant; i++)
	 {
		 for (j = 0; j < QuantityAssessment; j++)
		 {
			 if (BUFMax < arr[i][j])
			 {
				 BUFMax = arr[i][j];
				 BufIndex = j;
			 }

		 }
		 arr[i][BufIndex] = 0;
	 }
	 for (short i = 0; i < QuantityParticipant; i++)
	 {
		 for (j = 0; j < QuantityAssessment; j++)
		 {
			 SumArr[i] += QuantityAssessment;
		 }
		 SumArr[i] /= QuantityAssessment - 2;
	 }
}

 void PrintAssessments()
 {
	 system("cls");
	 for (short i = 0; i < QuantityParticipant; i++)
	 {
		 cout << "Participant -  " << i + 1 << " " << SumArr[i] << endl;
	 }
 }

void EnterAssessment()
{
	int BUFFAssessment = 1;
	int BUFFParticipant = 1;

	for (short j = 0; j < QuantityParticipant; j++)
	{
		system("cls");
		for (short i = 0; i < QuantityAssessment; i++)
		{
			cout << "Enter assesments\n\tParticipant-" << BUFFParticipant << "\n\tAssessment-" << BUFFAssessment<<"\n:: ";
			cin >> arr[j][i];
			BUFFAssessment++;
		}
		BUFFAssessment = 1;
		BUFFParticipant++;
	}
}

int main()
{
	srand(unsigned(time(NULL)));
	EnterAssessment();
	OperationsVithAssessment();
	PrintAssessments();
	system("pause");
	return 0;
}