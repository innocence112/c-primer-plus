//question6.cpp --- ʹ�ö�ά����洢3����ÿ���µ���������������ÿ������������������������
#include<iostream>
#include<string>
const int month = 12;
const int year = 3;
int main()
{
	using namespace std;
	char* Month[12] = { "January", "February", "March", "April", "May", " June", "July", "August", "September", "October", "November", "December" };
	int sale[year][month];
	double sum_year[3] = { 0 }, sum_3years = 0;
	char* mun[3] = { "the first year", "the second year", "the third year" };
	for (int j = 0; j < 3; ++j)
	{
		int i;
		for (i = 0; i < 12; ++i)
		{
			cout << "Enter the " << Month[i] << "th month of sale:";
			cin >> sale[j][i];
			sum_year[j] += sale[j][i];
		}
		cout << "The sum of the " << mun[j] << "'s sales is:" << sum_year[j] << endl;
		sum_3years += sum_year[j];
	}
	cout << "the sum sales of three years is:" << sum_3years << endl;
	cin.get();
	cin.get();
	return 0;
}