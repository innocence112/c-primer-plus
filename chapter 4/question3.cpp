//question3.cpp --- 使用char数组和头文件cstring中的函数拼接字符串
#include<iostream>
#include<cstring>           // C-Style

int main()
{
	using namespace std;

	char first_name[20];
	char last_name[20];
	const char a[] = ", ";
	cout << "Enter your first name:";
	cin.getline(first_name, 20);
	cout << "Enter your last name:";
	cin.getline(last_name, 20);
	strcat_s(last_name,a);
	strcat_s(last_name, first_name);
	cout << "Here's the information in a single string:" << last_name << endl;
	cin.get();
	return 0;
}