//question5.cpp --- ʹ�õ��ú���ʵ�������¶������¶ȵ�ת��
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