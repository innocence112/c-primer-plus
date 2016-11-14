//question4.cpp --- 使用string 对象和头文件string中的函数拼接字符串
#include<iostream>
#include<string>

int main()
{
	using namespace std;

	string firstName;
	string lastName;
	string a = ", ";
	string name;
	cout << "Enter your first name:";
	getline(cin, firstName);
	cout << "Enter your last name:";
	getline(cin, lastName);
	name = lastName + a + firstName;
	cout << "Here's the information in a single string:" << name << endl;
	cin.get();
	return 0;
}