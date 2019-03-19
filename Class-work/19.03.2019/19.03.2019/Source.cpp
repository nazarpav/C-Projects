/*C++ 
Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку.*/
#include <iostream>
#include <string>
#include <ctime>

//65>90A
//97>122a

using namespace std;
void strlengts(string str,char tmp)
{
	int buf=0;
	char buff;
	int bufff = 0;
	int countnums = 0;
	int countsymbol = 0;
	int countcharcer = 0;
	bufff = tmp;
	for (int i = 0; i < str.length(); i++)
	{
		
		buff = str[i];
		buf = buff;
		if (buf==bufff)
		{
			continue;
		}
		else
		{
			buff = buf;
			cout << buff;
		}
		
	}
	
}

int main()
{
	srand(unsigned(time(NULL)));
	string str;
	char tmp = 0;
	cout << "enter string";
	cin >> str;
	cout << "enter charcher > ";
	cin >> tmp;
	strlengts(str,tmp);
	cout << endl;
	system("pause");
	return 0;
}
/*C++ 
Дано рядок. Замінити у рядку всі великі букви на малі і навпаки.*/
//#include <iostream>
//#include <string>
//#include <ctime>
//
////65>90A
////97>122a
//
//using namespace std;
//void strlengts(string str)
//{
//	int buf=0;
//	char buff;
//	int countnums = 0;
//	int countsymbol = 0;
//	int countcharcer = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		buff = str[i];
//		buf = buff;
//		if (buff<=90&&buf>=65)
//		{
//			buf += 32;
//		}
//		else if (buff <= 122 && buf >= 97)
//		{
//			buf -= 32;
//		}
//		buff = buf;
//		str[i] = buff;
//	}
//	cout << str<<endl;
//	
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	string str;
//	cout << "enter string";
//	cin >> str;
//	strlengts(str);
//	system("pause");
//	return 0;
//}


/*
C++ 
Вводиться рядок. Порахувати кількість латинських букв, цифр та розділових знаків у рядку.  */
//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//void strlengts(string str)
//{
//	int buf=0;
//	char buff;
//	int countnums = 0;
//	int countsymbol = 0;
//	int countcharcer = 0;
//	for (int i = 0; i < str.length(); i++)
//	{
//		buff = str[i];
//		buf = buff;
//		if (buf <= 57 && buf >= 48)
//		{
//			countnums++;
//		}
//		else if (buf <= 90 && buf >= 65|| buf <= 122 && buf >= 97)
//		{
//			countcharcer++;
//		}
//		else if (buf <= 47 && buf >= 33|| buf <= 64 && buf >= 58)
//		{
//			countsymbol++;
//		}
//	}
//
//	cout << "Charcher > " << countcharcer<<endl;
//	cout << "Nums > " << countnums<<endl;
//	cout << "Symbol > " << countsymbol<<endl;
//	
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	
//	string str;
//	cout << "enter string";
//	cin >> str;
//	strlengts(str);
//
//
//	system("pause");
//	return 0;
//}

///*+
//Вводиться рядок.Яких букв у рядку більше ’а’ чи ’о’ ?*/
//#include <iostream>
//#include <string>
//#include <ctime>
//
//using namespace std;
//int strlengts(char *str)
//{
//	int counter = 0;
//	while (str[counter] != '\0')
//	{
//
//		counter++;
//	}
//	return counter;
//}
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	/*char str1[255];
//	char str2[255];
//	cin >> str1>>str2;
//	cout<<strcat_s(str1,str2)<<endl;
//	cout << str1;*/
//
//	string strr1;
//	string strr2;
//	cin >> strr1 >> strr2;
//
//	if ((strr1.length()) > (strr2.length()))
//	{
//		cout << strr1 << ">" << strr2;
//	}
//	else if((strr1.length()) < (strr2.length()))
//	{
//		cout << strr1 << "<" << strr2;
//	}
//	else if((strr1.length()) == (strr2.length()))
//	{
//		cout << strr1 << "=" << strr2;
//	}
//	else
//	{
//		cout << "EROR\n";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}