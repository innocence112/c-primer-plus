//question3.cpp --- ʹ�������û��Զ��庯�������ʾ
#include<iostream>

void fun1();        //����ԭ��
void fun2();

int main()
{
	using namespace std;
	fun1();             //���ú���
fun1();
	fun2();
	fun2();
	cin.get();
	return 0;
}

void fun1()          //����һ��������Ϊfun1������Ϊ�գ�����ֵΪ�յĺ���
{
	using namespace std;
	cout << "Three blind mice" << endl;
}

void fun2()
{
	using namespace std;
	cout << "See how they run" << endl;
}