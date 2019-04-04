#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
using namespace std;

struct telbook
{
	string name;
	string telnum;
	string adress;
};
int main()
{
	srand(unsigned(time(NULL)));

	string path = "C:/Windows/System32/drivers/etc/hosts";
	ofstream write_file;
	write_file.open(path, ofstream::app);
	/*if (!write_file.is_open())
	{
		cout << "Cant not open file\n";
	}
	else
	{*/
		write_file << "\n!!!!!!!!!!!!!!!!!\n";
	//}
	write_file.close();
	ifstream read_file;
	read_file.open(path);
	if (!read_file.is_open())
	{
		cout << "Cant not open file\n";
	}
	else
	{
		string data;
		while (!read_file.eof())
		{
			getline(read_file, data);
			cout << data << endl;
		}
	}
	read_file.close();
	/*telbook TB;
	string path = "D:/DB.txt";
	cout << "enter name> ";
	cin >> TB.name;
	cout << "\nenter telnum> ";
	cin >> TB.telnum;
	cout << "\nenter adress> ";
	cin >> TB.adress;
	cout << endl;
	ofstream write_file;
	write_file.open(path, ofstream::app);
	if (!write_file.is_open())
	{
		cout << "Cant not open file\n";
	}
	else
	{
		cout << "Great!!!" << endl;
		write_file << TB.name;
		write_file << " ";
		write_file << TB.telnum;
		write_file << " ";
		write_file << TB.adress;
		write_file << "\n";
	}
	write_file.close();
	ifstream read_file;
	read_file.open(path);
	if (!read_file.is_open())
	{
		cout << "Cant not open file\n";
	}
	else
	{
		string data;
		while (!read_file.eof())
		{
			getline(read_file, data);
			cout << data << endl;
		}
	}
	read_file.close();*/

	//ofstream write_file;
	//string path = "DB.txt";
	//write_file.open(path,ofstream::app);
	//if (!write_file.is_open())
	//{
	//	cout << "Cant not open file\n";
	//}
	//else
	//{
	//	cout << "Great!!!" << endl;
	//	string data;
	//	cin >> data;
	//	write_file << data;
	//}

	//ifstream read_file;
	//read_file.open(path);
	//if (!read_file.is_open())
	//{
	//	cout << "Cant not open file\n";
	//}
	//else
	//{
	//	cout << "Great!!!" << endl;
	//	/*char data;
	//	while (read_file.get(data))
	//	{
	//		cout << data << endl;
	//	}*/
	//	string data;
	//	while (!read_file.eof())
	//	{
	//		getline(read_file, data);
	//		cout << data << endl;
	//	}
	//}
	system("pause");
	return 0;
}
