//question1.cpp --- �����������������㲢�������������֮����������֮�͡������������С��������
#include<iostream>

int main()
{
	using namespace std;
	int min, max, sum;
	cout << "Enter two integer:";
	cin >> min >> max;
	sum = (min + max)*(max - min + 1) / 2;
	cout << "The sum of the two integer is:" << sum << endl;
	cin.get();
	cin.get();
	return 0;
}