//question5.cpp --- 使用调用函数实现摄氏温度向华氏温度的转换
#include<iostream>

double convert(double C);

int main()
{
	using namespace std;

	double C, F;
	cout << "please enter a Celsius value:";
	cin >> C;
	cin.get();
	F = convert(C);
	cout << C << " degrees Celsius is " << F << " degrees Fahrenheit." << endl;
	cin.get();
	return 0;
}

double convert(double C)
{
	double F;
	F = 1.8*C + 32.0;
	return F;
}