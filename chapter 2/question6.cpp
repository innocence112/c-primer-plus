//qestion6.cpp --- 调用函数实现光年到天文单位的转换
#include<iostream>

double convert(double);      //函数原型应包括函数类型，函数名，参数类型

int main()
{
	using namespace std;

	double x,y;
	cout << "Enter the number of light years:";
	cin >> x;
	cin.get();
	y = convert(x);
	cout << x << " light years = " << y << " astronomical units." << endl;
	cin.get();
	return 0;
}

double convert(double x)
{
	double y;
	y = 63240 * x;
	return y;
}