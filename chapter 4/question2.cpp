//question2.cpp --- ʹ��C++ string ��
#include <iostream>

#include<string>                       //����ͷ�ļ�string

int main()
{
	using namespace std;                //string λ�����ƿռ�std��
	//const int ArSize = 20;
	//char name[ArSize];
	string name;                         //string ���͵ı������洢�ַ��� �����迼�ǳ���
	//char dessert[ArSize]; 
	string dessert;

	cout << "Enter your name:\n";
	//cin.getline(name, ArSize);  // reads through newline
	getline(cin, name);                         //cin.getline(name,ArSize)��һ�������ȡ�����У�  getline(cin,name)��һ�������ȡ��string������
	                                            //����û��ʹ�þ���ʾ������˵�����getline()�����෽��������cin��Ϊ������ָ��������ȥ�������롣����Ҳû��ָ���ַ������ȵĲ�������Ϊstring�������ַ����ĳ��ȵ����Լ��Ĵ�С
	cout << "Enter your favorite dessert:\n";
	//cin.getline(dessert, ArSize);
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	cin.get();
	return 0;
}