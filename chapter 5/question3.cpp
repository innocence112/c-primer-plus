//question3.cpp --- Ҫ���û��������֣�ÿ������󣬳��򶼽����浽ĿǰΪֹ������������ۻ��͡����û�����0ʱ�����������
#include<iostream>;

int main()
{
	using namespace std;
	double value;
	double sum=0;
	cout << "The program will sum the value of you enter" << endl;
	cout << "Please enther your values,and finished with Zero:";
	cin >> value;
	while (value!= 0)
	{
		sum += value;
		cout << "The sum is" << sum << endl;
		cout << "Please enther your values,and finished with Zero:";
		cin >> value;

	}
	cin.get();
	cin.get();
	return 0;
}