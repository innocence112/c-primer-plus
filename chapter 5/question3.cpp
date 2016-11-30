//question3.cpp --- 要求用户输入数字，每次输入后，程序都将报告到目前为止，所有输入的累积和。当用户输入0时，程序结束。
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