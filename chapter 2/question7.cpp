//question7.cpp --- �û�����Сʱ�ͷ�����������void������ʾʱ��
#include<iostream>

void display(int, int);

int main()
{
	using namespace std;

	int hour, minute;
	cout << "Enter the number of hours:";
	cin >> hour;
	cin.get();
	//cout << endl;                   // cin.get()�Ӽ��̻�ȡһ���ַ�װ��hour�к�����س���������Զ����У�����Ҫ�����endl
	cout << "Enter the nunber of minutes:";
	cin >> minute;
	cin.get();
	//cout << endl;
	display(hour,minute);
	cin.get();
	return 0;
}

void display(int hour, int minute)
{
	using namespace std;
	
	cout << "Time:" << hour << ":" << minute << endl;
	
}