//qestion6.cpp --- ���ú���ʵ�ֹ��굽���ĵ�λ��ת��
#include<iostream>

double convert(double);      //����ԭ��Ӧ�����������ͣ�����������������

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