//question7.cpp --- 用户输入小时和分钟数，调用void函数显示时间
#include<iostream>

void display(int, int);

int main()
{
	using namespace std;

	int hour, minute;
	cout << "Enter the number of hours:";
	cin >> hour;
	cin.get();
	//cout << endl;                   // cin.get()从键盘获取一个字符装入hour中后，输入回车结束命令，自动换行，不需要再输出endl
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