//question1.cpp --- 输入两个整数，计算并输出这两个整数之间所有整数之和。假设先输入较小的整数。
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