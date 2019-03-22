/*2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику: кількість пробільних символів (whitespaces), голосних, приголосних, знаків пунктуації.
Введення передбачається англомовним. */
 #include <iostream>
#include <ctime>
#include <string>
using namespace std;
//str.length()
void statstr(char*str)
{
	int space = 0,vowel = 0, consonant = 0, symbol = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i]==char(32))
		{
			space++;
		}
		else if (str[i] == char(65) || str[i] == char(97) || str[i] == char(69) || str[i] == char(101) || str[i] == char(73) || str[i] == char(105) || str[i] == char(79) || str[i] == char(111) || str[i] == char(85) || str[i] == char(117))
		{

			vowel++;
		}
		else if (str[i]>=66&& str[i]<=68|| str[i] >= 98 && str[i] <= 100|| str[i] >= 70 && str[i] <=72  || str[i] >= 102 && str[i] <= 104 || str[i] >= 74 && str[i] <= 78 || str[i] >= 106 && str[i] <= 110 || str[i] >= 80 && str[i] <= 84 || str[i] >= 112 && str[i] <= 116 || str[i] >= 86 && str[i] <= 90 || str[i] >= 118 && str[i] <= 122 && str[i] != char(33) || str[i] != char(34) || str[i] != char(40) || str[i] != char(41) || str[i] != char(44) || str[i] != char(46) || str[i] != char(58) || str[i] != char(59) || str[i] != char(96))
		{
			consonant++;
		}
		else if (str[i] == char(33)|| str[i] == char(34) || str[i] == char(40) || str[i] == char(41) || str[i] == char(44) || str[i] == char(46) || str[i] == char(58) || str[i] == char(59) || str[i] == char(96))
		{
			symbol++;
		}
	}
	cout << "SPACE > " << space;
	cout << "vowel > " << vowel;
	cout << "consonant > " << consonant;
	cout << "symbol of Syntax > " << symbol;
}
int main()
{
	char str[255];
	cout << "Enter string > ";
	cin >> str;
	statstr(str);
	system("pause");
	return 0;
}
/*1) Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку. 
*/
//#include <iostream>
//#include <ctime>
//#include <string>
//using namespace std;
//
//string delelem(string str, char elem)
//{
//	int iter = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		if (str[i] == elem)
//		{
//			iter++;
//		}
//	}
//	for (int i = 0; i < iter; i++)
//	{
//		str.erase(str.find(elem), 1);
//	}
//	return str;
//}
//int main()
//{
//	string str;
//	char elem;
//	cout << "Enter string > ";
//	cin >> str;
//	cout << "enter del element > ";
//	cin >> elem;
//	str = delelem(str, elem);
//	cout << "New string > " << str << endl;
//	system("pause");
//	return 0;
//}