//question3.cpp --- 使用三个用户自定义函数完成显示
#include<iostream>

void fun1();        //函数原型
void fun2();

int main()
{
	using namespace std;
	fun1();             //调用函数
fun1();
	fun2();
	fun2();
	cin.get();
	return 0;
}

void fun1()          //定义一个函数名为fun1，参数为空，返回值为空的函数
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void fun2()
{
	using namespace std;
	cout << "See how they run" << endl;
}