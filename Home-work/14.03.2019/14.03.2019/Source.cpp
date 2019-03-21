/*C++ 
Написати програму, яка отримує від користувача довільний набір cимволів та виводить на екран рядок кодів символів,
по суті, закодований рядок. Наприклад, при введенні ABA на екрані буде 65 66 65.*/
#include<iostream>
#include<string>
#include<ctime>

using namespace std;


void cript(char arr[255],char arrb[255],int arrint[255],int crpt=0)
{
	for (int i = 0; i < strlen(arr); i++)
	{
		arrint[i] = arr[i];
		arrint[i] += crpt;
	}
	for (int i = 0; i < strlen(arr); i++)
	{
		arr[i] = (char)arrint[i];
	}
}
void decript(char arr[255], char arrb[255], int arrint[255], int crpt = 0)
{
	for (int i = 0; i < strlen(arr); i++)
	{
		arrint[i] -=crpt;
	}
	for (int i = 0; i < strlen(arr); i++)
	{
		arr[i] = (char)arrint[i];
	}
}
void print(int arrint[255],char arr[255])
{
	//for (int i = 0; i < strlen(arr); i++)
	
		cout << arr;

}
int main()
{
	int crpt = 0;
	char arrb[255];
	char arr[255];
	int arrint[255];
	int dec = 0;
	char var;
	while (true)
	{
		system("cls");
		cout << "Enter string ::";
		cin >> arr;
		cout << "Enter crypt ::";
		cin >> crpt;
		cript(arr, arrb, arrint, crpt);
		cout << "CRYPT\nvvvvv\n\n";
		print(arrint, arr);
		cout << "\nDecript?(y/n)";
		cin >> var;
		if (var=='y')
		{
			//system("cls");
			cout << "DECRYPT\nvvvvv\n\n";
			decript(arr, arrb, arrint, crpt);
			print(arrint, arr);
		}


		cout << endl;
		system("pause");
		cout << "EXIT?\nPress-0\n";
		cin >> dec;
		if (dec == 0)
		{
			break;
		}
	}
	return 0;
}

/*C++ 
Написати програму, яка отримує від користувача довільний набір cимволів та виводить на екран рядок кодів символів, по суті, закодований рядок. Наприклад, при введенні ABA на екрані буде 65 66 65.  
*/
//#include<iostream>
//#include<string>
//#include<ctime>
//
//using namespace std;
//
//int main()
//{
//	int dec = 0;
//	char arr[255];
//	while (true)
//	{
//		system("cls");
//		cout << "Enter symbol(Enter 777 to exit)\nDecimal system ::";
//		cin >> arr;
//		for (int i = 0; i < strlen(arr); i++)
//		{
//			dec = arr[i];
//			cout << dec<<" ";
//		}
//
//		cout << endl;
//		system("pause");
//		cout << "EXIT?\nPress-0\n";
//		cin >> dec;
//		if (dec == 0)
//		{
//			break;
//		}
//	}
//	return 0;
//}
///*C++ 
//Написати програму, яка отримує від користувача довільний набір цифр (кодів) та виводить на екран новоутворений рядок символів.
//Наприклад, при введенні цифр 65 66 65 на екрані буде ABA */
//
//#include<iostream>
//#include<string>
//#include<ctime>
//
//using namespace std;
//
//int main()
//{
//	int dec = 0;
//	while (true)
//	{
//		system("cls");
//		cout << "Enter ascii code(Enter 777 to exit)\nDecimal system ::";
//		cin >> dec;
//		if (dec == 777)
//		{
//			break;
//		}
//		if (dec<=132&&dec>=65||dec<=122&&dec>=97)
//		{
//			cout << (char)dec;
//		}
//		cout << endl;
//		system("pause");
//	}
//	
//
//	system("pause");
//	return 0;
//}