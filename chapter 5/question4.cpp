//question4.cpp --- Ͷ��100Ԫ��Daphe:��Ϣ=0.10*ԭʼ��Cleo����Ϣ=0.05*��ǰ������������C�ᳬ��D������ʾ���˵�Ͷ�ʼ�ֵ��
#include<iostream>
const int deposit = 100;
int main()
{
	using namespace std;
	double Daphe=110, Cleo=105;
	int i;
	for (i = 2; Daphe > Cleo; ++i)
	{
		Daphe += 0.1*deposit;
		Cleo += 0.05*Cleo;
	}
	cout << i << "yeas later,Cleo more than Daphe" << endl;
	cout << "Now Cleo has:$" << Cleo<<" Daphe has:$"<< Daphe;
	cin.get();
	return 0;
}