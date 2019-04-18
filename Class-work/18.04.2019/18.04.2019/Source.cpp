/*
Дана строка символов. Признак конца строки — символ 'n' (переход на новую строку). Строка состоит из слов, которые отделены друг от друга пробелами.
Вывести самое длинное слово и его порядковый номер.
*/
//#include <iostream>
//#include<string>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	string str="qwerty qwersssssssssstyssss qwerssssstssy qwerty\n";
//	cout << "String======>  " << str << endl;
//	short space = 0;
//	short max1 = 0;
//	short max2 = 0;
//	bool f=false;
//	short count = 0;
//	short count2 = 0;
//	for (unsigned short i = 0; str[i]!='\n'; i++)
//	{
//		if (f == true)
//		{
//			if (max1 > max2)
//			{
//				max2 = max1;
//				count++;
//				max1 = 0;
//			}
//			f = false;
//		}
//		if (str[i] != ' ')
//		{
//			max1++;
//			
//		}
//		else if (str[i]==' ')
//		{
//			f = true;
//		}
//	}
//	for (short i = 0; str[i] != '\n'; i++)
//	{
//		if (str[i] == ' ')
//		{
//			count2++;
//			if (count2 == count - 1)
//			{
//				cout << "Max var=> ";
//				for (int j = 0; j < max2; j++)
//				{
//					cout << str[i + 1];
//					i++;
//				}
//				cout <<endl<< "number var=>" << count;
//				break;
//			}
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}

/*
Дана строка символов, которая обязательно заканчивается символом точки. Удалить из строки первые буквы каждого слова.
*/
//#include <iostream>
//#include<string>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	string str="qwerty qwerty qwerty qwerty.";
//	cout << str;
//	str.erase(0, 1);
//	for (unsigned short i = 0; i<str.length(); i++)
//	{
//		if (str[i] == ' ')
//		{
//			str.erase(i+1, 1);
//		}
//	}
//	cout << endl << str << endl;
//	system("pause");
//	return 0;
//}

/*Составить программу-тест  на экране по очереди появляются вопросы (вопросы выбираются программистом), с вариантами ответов. В конце работы программа выдает количество заработанных баллов по результатам ответа.*/

//#include <iostream>
//#include<string>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//  srand(unsigned(time(NULL)));
//  int ask = 0,score=0;
//  cout << "what size type int\n4 byte-1\n2 byte-2\n8 byte-3\n";
//  cin >> ask;
//  if (ask == 1)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what size type short\n4 byte-1\n2 byte-2\n8 byte-3\n";
//  cin >> ask;
//  if (ask == 2)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what size type float\n4 byte-1\n2 byte-2\n8 byte-3\n";
//  cin >> ask;
//  if (ask == 1)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what size type double\n4 byte-1\n2 byte-2\n8 byte-3\n";
//  cin >> ask;
//  if (ask == 3)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what a chac-code symbol( a )\n97-1\n56-2\n98-3\n";
//  cin >> ask;
//  if (ask == 1)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what a chac-code symbol( q )\n113-1\n116-2\n78-3\n";
//  cin >> ask;
//  if (ask == 1)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what a chac-code ( ENTER )\n14 -1\n13 -2\n11 -3\n";
//  cin >> ask;
//  if (ask == 2)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what a chac-code ( NULL )\n0-1\n255-2\n10-3\n";
//  cin >> ask;
//  if (ask == 1)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what size a standart ascii table\n128 -1\n256-2\n512-3\n";
//  cin >> ask;
//  if (ask == 1)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "what a stack\nstatic program memory-1\ndynamic program memory-2\ntype of data-3\n";
//  cin >> ask;
//  if (ask == 1)
//  {
//	  score++;
//  }
//  system("cls");
//  cout << "You score a> " << score << endl;
//  if (score < 3)
//  {
//	  cout << "This is bad"<<endl;
//  }
//  else if (score < 7)
//  {
//	  cout << "soso" << endl;
//  }
//  else if (score < 12)
//  {
//	  cout << "Master" << endl;
//  }
//  else
//  {
//	  cout << "eror\n";
//  }
//	system("pause");
//	return 0;
//}

/*
Составить программу, которая будет генерировать случайные числа в интервале [a;b] и заполнять ими двумерный массив размером 10 на 10. В массиве необходимо найти номер строки с минимальным элементом.
Поменять строки массива местами, строку с минимальным элементом и первую строку массива. Организовать удобный вывод на экран.
*/
//#include <iostream>
//#include<string>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//
//void print(int **&arr,const int &size)
//{
//	for (unsigned short i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			cout<< arr[i][j] <<" ";
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//void fill(int **&arr,const int &size)
//{
//	int a=0, b = 0;
//	cout << "enter(a>b)!!! a>";
//	cin >> a;
//	cout << "enter(a>b)!!! b>";
//	cin >> b;
//	system("cls");
//	for (unsigned short i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			arr[i][j] = rand() % a + b;
//		}	
//	}
//}
//int search_min_elem(int **&arr, const int &size)
//{
//	int min = 10000000;
//	int str = 0;
//	for (unsigned short i = 0; i < size; i++)
//	{
//		for (int j = 0; j < size; j++)
//		{
//			if (arr[i][j] < min)
//			{
//				min = arr[i][j];
//				str = i;
//			}
//		}
//	}
//	return str;
//}
//void rev_str_arr(int **&arr, const int &size,int &str)
//{
//	int arrbuf=0;
//	for (unsigned short i = 0; i < size; i++)
//	{
//		arrbuf = arr[str][i];
//		arr[str][i] = arr[0][i];
//		arr[0][i] = arrbuf;
//	}
//}
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int size = 10;
//	int str = 0;
//	int **arr= new int*[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = new int[size];
//	}
//	fill(arr, size);
//	print(arr, size);
//	str=search_min_elem(arr, size);
//	rev_str_arr(arr, size, str);
//	print(arr, size);
//	for (int i = 0; i < size; i++)
//	{
//		delete[] arr[i];
//	}
//	delete[] arr;
//	system("pause");
//	return 0;
//}




/*Дан массив размера n, заполнить его случайными числами, Найти все нечётные числа массива.*/
//#include <iostream>
//#include<string>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//void uneven(int arr[],const int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 != 0)
//		{
//			cout << arr[i]<<" ";
//		}
//	}
//	cout << endl;
//}
//void print(int arr[],const int &size)
//{
//	for (unsigned short i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//void fill(int arr[],const int &size)
//{
//	for (unsigned short i = 0; i < size; i++)
//	{
//		arr[i]=rand()%100+1;
//	}
//}
//int main()
//{
//  srand(unsigned(time(NULL)));
//	const int n = 10;
//	int arr[n];
//	fill(arr, n);
//	uneven(arr, n);
//	print(arr, n);
//	system("pause");
//	return 0;
//}


/*Задача на динамическое выделение памяти. Изначально есть указатель на массив с одним элементом. Пользователь вводит число. Если оно больше 0 записываем его в массив. Далее пользователь вводит второе число,
тут уже,  если оно больше 0, надо пере выделять память для 2-х элементов массива и записать в массив второе число. И так далее…  для 3-х элементов, для 4-х…  пока пользователь не введет отрицательное число.*/
//#include <iostream>
//#include<string>
//#include<ctime>
//#include<cstdlib>
//using namespace std;
//void Get_memory(int*&arr,int &var,unsigned short &size)
//{
//	size++;
//	arr=(int*)realloc(arr, size * sizeof(int));
//	arr[size-1] = var;
//}
//void print(int*&arr, unsigned short &size)
//{
//	for (unsigned short i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//  srand(unsigned(time(NULL)));
//	int* arr = nullptr;
//	unsigned short size = 0;
//	arr = new int[size+1];
//	int var = 1;
//	while (var>0)
//	{
//		cout << "Enter variable=> ";
//		cin >> var;
//		if (var < 0)
//		{
//			continue;
//		}
//		if (size == 0)
//		{
//			arr[size] = var;
//			size++;
//		}
//		else
//		{
//			Get_memory(arr, var, size);
//		}
//	}
//	print(arr, size);
//  delete[] arr;
//	system("pause");
//	return 0;
//}