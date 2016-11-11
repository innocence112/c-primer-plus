//question3 --- 以度、秒、分的方式输入一个纬度，然后以度为单位显示该纬度
#include<iostream>
const int degree_minute = 60;
const int minute_second = 60;

int main()
{
	using namespace std;
	int degree, minute, second;
	cout << "Enter a latitude in degrees,minutes,and seconds:\n";
	cout << "First,enter the degrees:";
	cin >> degree;
	cin.get();
	cout << "Next,enter the minutes of arc:";
	cin >> minute;
	cin.get();
	cout << "Finally,enter the seconds of arc:";
	cin >> second;
	cin.get();
	double latitude;
	latitude = degree + double (minute) / double (degree_minute) + (double (second)/ double (minute_second)) / double(degree_minute);   //强制类型转换，对变量类型强制转换而不是对表达式
	cout << degree << " degrees, " << minute << " minutes, " << second << " seconds = " << latitude << " degrees\n";
	cin.get();
	return 0;
}