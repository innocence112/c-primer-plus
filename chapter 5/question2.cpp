//question2.cpp --- ʹ��array�����long double���±�д�����嵥5.4��������100��
#include<iostream>
#include<array>
const int ArSize = 101;
int main()
{
	using namespace std;
	array <long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1L;
	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];
		cout <<"100! = "<< factorials[ArSize-1] << endl;
	cin.get();
	return 0;
}