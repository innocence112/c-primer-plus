//question4.cpp --- ʹ��string �����ͷ�ļ�string�еĺ���ƴ���ַ���
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