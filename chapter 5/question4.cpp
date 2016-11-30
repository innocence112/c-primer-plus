//question4.cpp --- 投资100元，Daphe:利息=0.10*原始存款，Cleo：利息=0.05*当前存款。计算多少年后C会超过D，并显示两人的投资价值。
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