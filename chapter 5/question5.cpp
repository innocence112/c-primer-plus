//question5.cpp --- ����ȫ����ÿ���µ���������ͨ��ѭ����ʹ�ó�ʼ��Ϊ�·��ַ���char*���飨��string�������飩���½�����ʾ����������
                  //�����ݴ洢��һ��int�����У�Ȼ�󣬳�����������и�Ԫ�ص���������������һ������������
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char* month[12] = { "January","February","March","April","May"," June","July","August","September","October","November","December"};
	int sale[12];
	double sum=0;
	for (int i = 0; i < 12; ++i)
	{
		cout << "Enter the " << month[i] << "th month of sale:";
		cin >> sale[i];
		sum += sale[i];
    }
	cout << "The sum of sales is:" << sum << endl;
	cin.get();
	cin.get();
	return 0;
}