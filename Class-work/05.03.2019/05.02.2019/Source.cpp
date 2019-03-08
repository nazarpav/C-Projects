/*Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
Виводу масиву 
Доповнення масиву одним елементом в кінець масиву. 
Доповнення масиву одним елементом в початокмасиву.    
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню 
///////////////////////////////////////////////////////////////////////////
**Дописати до задачі  доповнення, видалення, вставки блоку елементів. **
///////////////////////////////////////////////////////////////////////////
*/
#include<iostream>
#include<ctime>


void Print(int arr[], int size);

void Fill(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
	}
}

int * arrPLUSblock(int arr[], int &SIZE,int arrvalue[], int SIZEVALUE, int indexx)
{
	short index = 0;
	int *arrbuf = new int[SIZE + 1];
	for (; index < indexx; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	for (short i = 0; i < SIZEVALUE; i++)
	{
		*(arrbuf + index) = *(arrvalue + i);
		index++;
	}
	for (; index < SIZE + SIZEVALUE; index++)
	{
		*(arrbuf + index) = *(arr + (index - SIZEVALUE));
	}
	SIZE+=SIZEVALUE;
	delete[]arr;
	//int *arr = new int[SIZE];
	arr = arrbuf;
	return arrbuf;
}
int * arrMINUSblock(int arr[], int &SIZE, int pos1, int pos2)
{
	short index = 0;
	int *arrbuf = new int[SIZE - 1];
	for (; index < pos1; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	for (; index < SIZE - (pos2-pos1); index++)
	{
		*(arrbuf + index) = *(arr + index + (pos2-pos1));
	}
	SIZE-=pos2-pos1;
	delete[]arr;
	//int *arr = new int[SIZE];
	arr = arrbuf;
	return arrbuf;
}

int * arrPLUSblockend(int arr[], int &SIZE, int arrvalue[], int SIZEVALUE)
{
	short index = 0;
	int *arrbuf = new int[SIZE + SIZEVALUE];
	for (index = 0; index < SIZE; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	for (short i = 0; i < SIZEVALUE; i++)
	{
		*(arrbuf + index) = *(arrvalue + i);
		index++;
	}
	SIZE+=SIZEVALUE;
	delete[]arr;
	//int *arr = new int[SIZE];
	arr = arrbuf;
	return arrbuf;
}

int * arrplus(int arr[], int &SIZE, int value,int indexx)
{
	short index = 0;
	int *arrbuf = new int[SIZE+1];
	for (; index < indexx; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	*(arrbuf + index) = value;
	index++;
	for (; index < SIZE+1; index++)
	{
		*(arrbuf + index) = *(arr + index-1);
	}
	SIZE++;
	delete[]arr;
	//int *arr = new int[SIZE];
	arr = arrbuf;
	return arrbuf;
}
int * arrplusend(int arr[], int &SIZE, int value)
{
	short index = 0;
	int *arrbuf = new int[SIZE + 1];
	for (index = 0; index < SIZE; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	*(arrbuf + index) = value;
	SIZE++;
	delete[]arr;
	//int *arr = new int[SIZE];
	arr = arrbuf;
	return arrbuf;
}
int * arrplusfront(int arr[], int &SIZE, int value)
{
	short index = 0;
	int *arrbuf = new int[SIZE + 1];
	*(arrbuf + index) = value;
	index++;
	for (; index < SIZE+1; index++)
	{
		*(arrbuf + index) = *(arr + (index-1));
	}
	SIZE++;
	delete[]arr;
	//int *arr = new int[SIZE];
	arr = arrbuf;
	return arrbuf;
}

int * arrminus(int arr[], int &SIZE, int indexx)
{
	short index = 0;
	int *arrbuf = new int[SIZE-1];
	for (; index < indexx; index++)
	{
		*(arrbuf + index) = *(arr + index);
	}
	for (; index < SIZE -1; index++)
	{
		*(arrbuf + index) = *(arr + index+1);
	}
	SIZE--;
	delete[]arr;
	//int *arr = new int[SIZE];
	arr = arrbuf;
	return arrbuf;
}
void Print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "arr [" << i << "]=" << *(arr + i) << "\t\t";
		std::cout << " Address = " << arr + i << std::endl;
	}
	std::cout << std::endl;
}
int main()
{
	srand(unsigned(time(NULL)));
	int SIZE = 0;
	int value = 0, index = 0;
	int var = 0;
	std::cout << "Enter SIZE arr:: ";
	std::cin >> SIZE;
	int *arr = new int[SIZE];
	Fill(arr, SIZE);
	while (true)
	{
		system("cls");
		Print(arr, SIZE);
		std::cout << "\n\n0 - plusarrfront\n1 -  plusarrend\n2 - arr minus\n3 - arrplus in the your index\n**4 - add block elements\n**5 - delete block elements\n**6 - add block elements in the your index\n7 - exit\n::";
		std::cin >> var;
		if (var == 1)
		{
			system("cls");
			std::cout << "before\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			std::cout << "Enter value + arr ::";
			std::cin >> value;
			arr = arrplusend(arr, SIZE, value);
			std::cout << "after\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			system("pause");
		}
		else if (var == 2)
		{
			system("cls");
			std::cout << "before\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			int indexxx = 0;
			std::cout << "Enter index ::";
			std::cin >> indexxx;
			arr=arrminus(arr, SIZE, indexxx);
			std::cout << "after\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			system("pause");
		}
		else if (var == 0)
		{
			system("cls");
			std::cout << "before\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			std::cout << "Enter value + arr ::";
			std::cin >> value;
			arr = arrplusfront(arr, SIZE, value);
			std::cout << "after\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			system("pause");
		}
		else if (var == 3)
		{
			system("cls");
			std::cout << "before\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			int indexx = 0;
			std::cout << "Enter value + arr ::";
			std::cin >> value;
			std::cout << "Enter index ::";
			std::cin >> indexx;
			arr = arrplus(arr, SIZE, value,indexx);
			std::cout << "after\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			system("pause");
		}
		else if (var == 4)
		{
			system("cls");
			std::cout << "before\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			int SIZEVALUE = 0;
			std::cout << "enter quantity element:: ";
			std::cin >> SIZEVALUE;
			//system("cls");
			int *arrvalue = new int[SIZEVALUE];
			int tmpind = SIZEVALUE;
			for (short i = 0; i < SIZEVALUE; i++)
			{
				std::cout << "Enter element (" << tmpind << ")" << "=> ";
				std::cin >> *(arrvalue+i);
				tmpind--;
				//system("cls");
			}
			arr=arrPLUSblockend(arr, SIZE, arrvalue, SIZEVALUE);
			Print(arr, SIZE);
			system("pause");

		}
		else if (var == 5)
		{
			system("cls");
			std::cout << "before\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			int pos1=0, pos2=0;
			std::cout << "enter pos1=> ";
			std::cin >> pos1;
			std::cout << "enter pos2=> ";
			std::cin >> pos2;
			arr = arrMINUSblock(arr, SIZE, pos1, pos2+1);
			std::cout << "after\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			system("pause");
		}
		else if (var == 6)
		{
			system("cls");
			std::cout << "before\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			int SIZEVALUE = 0,indexx=0;
			std::cout << "enter quantity element:: ";
			std::cin >> SIZEVALUE;
			//system("cls");
			int *arrvalue = new int[SIZEVALUE];
			int tmpind = SIZEVALUE;
			for (short i = 0; i < SIZEVALUE; i++)
			{
				std::cout << "Enter element (" << tmpind << ")" << "=> ";
				std::cin >> *(arrvalue + i);
				tmpind--;
				//system("cls");
			}
			std::cout << "Enter index => ";
			std::cin >> indexx;
			arr=arrPLUSblock(arr, SIZE, arrvalue, SIZEVALUE, indexx);
			std::cout << "after\n||||||\nvvvvvv\n";
			Print(arr, SIZE);
			system("pause");
			
		}
		else if (var == 7)
		{
			break;
		}
		else { std::cout << "eror!\n"; }
	}
	return 0;
}