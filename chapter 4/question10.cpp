//question10.cpp --- ʹ��array��������������
#include<iostream>
#include<array>              //����array���������ͷ�ļ�array

int main()
{
	using namespace std;
	array <float,3> score;
	cout << "Enter three grades:"<<endl;
	int i=0;
	float sum=0,avr=0;
	for (i = 0; i < 3; i++)
	{
		cin >> score[i];
		cin.get();
		sum += score[i];
	}
	avr = sum / i;
	cout << i << "," << avr << endl;
	cin.get();
	return 0;
}