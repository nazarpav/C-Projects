//C++
//Написати функції для роботи з динамічною матрицею :
//Функція створення динамічної матриці розміром row x col, де row та col
//Функція заповнення матриці
//Функція виводу матриці
//Функція доповнення матриці новим рядком
//Функція видалення з матриці рядка за вказаним номером
//Функція вставки нового рядка за вказаним номером
//Функція доповнення матриці новим стовпчиком
//Функція видалення з матриці стовпця за вказаним номером
//Функція вставки нового стовпця за вказаним номером
#include <iostream>
#include<ctime>

using namespace std;

void fillarr(int *arr[], int &rows, int &cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 100+1;
		}
	}
}
void printarr(int *arr[], int &rows, int &cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int ** dopcolARR(int *arr[], int &rows, int &cols)
{
	cols++;
	int **arrb = new int *[rows];

	for (int i = 0; i < rows; i++) {
		arrb[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols-1; j++) {
			arrb[i][j] = arr[i][j];
		}
	}
	for (int j = 0; j < rows; j++) {
		arrb[j][cols-1] = rand() % 100 + 1;
	}
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return arrb;

}
int ** delcolARR_IND(int *arr[], int &rows, int &cols, int &rowss)
{
	cols--;
	int **arrb = new int *[rows];
	int iter = 0;
	for (int i = 0; i < rows; i++) {
		arrb[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++) {
		//iter = 0;
		for (int j = 0; j < cols+1; j++) {
			//iter++;
			if (j == rowss)
			{
				continue;
			}
			arrb[i][j] = arr[i][j];
			
		}
	}
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return arrb;
}
int ** dopcolARR_IND(int *arr[], int &rows, int &cols, int &colss)
{
	cols++;
	int **arrb = new int *[rows];
	for (int i = 0; i < rows; i++) {
		arrb[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < colss; j++)
		{
			arrb[i][j]=arr[i][j];
		}
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = colss-1; j < cols; j++)
		{
			arrb[i][j] = arr[i][j];
		}
	}
	for (int j = 0; j < colss; j++) {
		arrb[j][colss] = rand() % 100 + 1;
	}
	for (int i = 0; i < rows - 1; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return arrb;
}
int ** doprowARR(int *arr[],int &rows,int &cols)
{
	rows++;
	int **arrb = new int *[rows];

	for (int i = 0; i < rows; i++) {
		arrb[i] = new int[cols];
	}
	for (int i = 0; i < rows-1; i++) {
		for (int j = 0; j < cols; j++) {
			arrb[i][j] =arr[i][j];
		}
	}
	for (int j = 0; j < cols; j++) {
		arrb[rows-1][j] = rand()%100+1;
	}
	for (int i = 0; i < rows-1; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return arrb;
}
int ** delrowARR_IND(int *arr[], int &rows, int &cols,int &rowss)
{
	rows--;
	int **arrb = new int *[rows];
	int iter =0;
	for (int i = 0; i < rows; i++) {
		arrb[i] = new int[cols];
	}
	for (; iter < rowss; iter++) {
		for (int j = 0; j < cols; j++) {
			arrb[iter][j] = arr[iter][j];
		}
	}
	iter++;
	for (; iter < rows+1; iter++) {
		for (int j = 0; j < cols; j++) {
			arrb[iter-1][j] = arr[iter][j];
		}
	}
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return arrb;
}
int ** doprowARR_IND(int *arr[], int &rows, int &cols, int &rowss)
{
	rows++;
	int **arrb = new int *[rows];
	int iter = 0;
	for (int i = 0; i < rows; i++) {
		arrb[i] = new int[cols];
	}

	for (; iter < rowss; iter++) {
		for (int j = 0; j < cols; j++) {
			arrb[iter][j] = arr[iter][j];
		}
	}
	for (int j = 0; j < cols; j++) {
		arrb[iter][j] = rand()%100+1;
	}
	iter++;
	for (; iter < rows; iter++) {
		for (int j = 0; j < cols; j++) {
			arrb[iter][j] = arr[iter-1][j];
		}
	}
	for (int i = 0; i < rows-1; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return arrb;
}
int main()
{
	srand(unsigned(time(NULL)));
	int cols = 0;
	int rows = 0;
	int rowss = 0;
	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;
	int **arr = new int *[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
	int var = 0;
	fillarr(arr, rows, cols);
	while (true)
	{
		system("cls");
		printarr(arr, rows, cols);
		cout << "Select operation vvv\nAdd rows - 1\ndel rows index - 2\nAdd rows index - 3\nAdd collum - 4\nDel collum index - 5\nAdd collum index - 6\nPrint arr - 7\nEXIT - 8\n";
		cin >> var;
		if (var == 1)
		{
			arr = doprowARR(arr, rows, cols);
			printarr(arr, rows, cols);
			system("pause");
		}
		else if (var == 2)
		{
			cout << "Enter index\n";
			cin >> rowss;
			arr = delrowARR_IND(arr, rows, cols, rowss);
			printarr(arr, rows, cols);
			system("pause");
		}
		else if (var == 3)
		{
			cout << "Enter index\n";
			cin >> rowss;
			arr = doprowARR_IND(arr, rows, cols, rowss);
			printarr(arr, rows, cols);
			system("pause");
		}
		else if (var == 4)
		{
			arr = dopcolARR(arr, rows, cols);
			printarr(arr, rows, cols);
			system("pause");
		}
		else if (var == 5)
		{
			cout << "Enter index\n";
			cin >> rowss;
			arr = delcolARR_IND(arr, rows, cols, rowss);
			printarr(arr, rows, cols);
			system("pause");
		}
		else if (var == 6)
		{
			cout << "Enter index\n";
			cin >> rowss;
			arr = dopcolARR_IND(arr, rows, cols, rowss);
			printarr(arr, rows, cols);
			system("pause");
		}
		else if (var == 7)
		{
			printarr(arr, rows, cols);
			system("pause");
		}
		else if (var == 8)
		{
			break;
		}
		else
		{
			cout << "EROR\n";
		}
	}
	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	return 0;
}