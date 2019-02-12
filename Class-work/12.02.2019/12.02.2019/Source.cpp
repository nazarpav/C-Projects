/*Kontrol work function*/
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
const int users = 1;
const int predm = 5;
const int rate = 5;
int arr[users][predm][rate];


int foo(int *arrb)
{
	
	for (int i = 0; i < predm; i++)
	{
		for (int j = 0; j < rate; j++)
		{
			arrb[i]+=arr[1][i][j];
		}
		arrb[i] /= rate;
	}
	return *arrb;
}
void printarr(int *arrb)
{
	for (int i = 0; i < predm; i++)
	{
		std::cout <<"avg num "<< i <<" :: " << arrb[i]<<std::endl;
	}
}

void fillarr ()
{

	for (int i = 0; i < predm; i++)
	{
		for (int j = 0; j < rate; j++)
		{
			arr[1][i][j]=rand()%12+1;
		}
	}

}


int main()
{
	srand(unsigned(time(NULL)));
	int a = 10,b=120,c=400;
	int arrb[rate]{};
	fillarr();
	foo(arrb);
	printarr(arrb);
	system("pause");
	return 0;
}


/*
C++
Дано три числа.Оголосити вказівники на ці числа.Отримати добуток трьох заданих чисел,
середє арифметичне, найменше з них, користуючись непрямим доступом до чисел(через вказівники).*/
//#include <iostream>
//#include <cstdlib>
//#include<ctime>
//#include <string>
//
//
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	int a = 0, b = 0, c = 0,avg=0,buf=0;
//	int *pa = &a, *pb = &b, *pc = &c;
//	std::cin >> *pa;
//	std::cin >> *pb;
//	std::cin >> *pc;
//	std::cout << "multiplication nums a b c = " << *pa**pb**pc << std::endl;
//	avg += *pa + *pb + *pc;
//	std::cout << "avg = "<<avg / 3 << std::endl;
//	if (*pa < *pb&&*pa<*pc)
//	{
//		buf = *pa;
//	}
//	else if (*pb < *pa&&*pb < *pc)
//	{
//		buf = *pb;
//	}
//	else if (*pc < *pa&&*pc < *pb)
//	{
//		buf = *pc;
//	}
//	std::cout <<"minimum num = " << buf<<std::endl;
//	system("pause");
//	return 0;
//}