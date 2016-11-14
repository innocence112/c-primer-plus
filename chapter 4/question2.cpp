//question2.cpp --- 使用C++ string 类
#include <iostream>

#include<string>                       //包含头文件string

int main()
{
	using namespace std;                //string 位于名称空间std中
	//const int ArSize = 20;
	//char name[ArSize];
	string name;                         //string 类型的变量来存储字符串 ，无需考虑长度
	//char dessert[ArSize]; 
	string dessert;

	cout << "Enter your name:\n";
	//cin.getline(name, ArSize);  // reads through newline
	getline(cin, name);                         //cin.getline(name,ArSize)将一行输入读取数组中，  getline(cin,name)将一行输入读取到string对象中
	                                            //这里没有使用句点表示法，这说明这个getline()不是类方法。它将cin作为参数，指出到哪里去查找输入。另外也没有指出字符串长度的参数，因为string将根据字符串的长度调整自己的大小
	cout << "Enter your favorite dessert:\n";
	//cin.getline(dessert, ArSize);
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	cin.get();
	return 0;
}