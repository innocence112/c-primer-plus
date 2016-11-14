//question1.cpp --- 多个单词输入
#include <iostream>

int main()
{
	using namespace std;

	char first_name[20];
	char last_name[20];
	char grade;
	int age;

	cout << "What is your first name?";
	cin.getline(first_name, 20);                 //getline()获取一行输入，get()获取一个单词
	cout << "What is your last name?";
	cin.getline(last_name, 20);
	cout << "What letter grade do you deserve?";
	cin >> grade;
	cin.get();
	cout << "What is your age?";
	cin >> age;
	cin.get();
	cout << "Name:" << last_name << "," << first_name << endl;
	cout << "Grade:" << char (grade + 1) << endl;
	cout << "Age:" << age << endl;
	cin.get();
	return 0;
}