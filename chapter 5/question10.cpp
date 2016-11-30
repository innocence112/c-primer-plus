//question10.cpp --- 使用嵌套循环，要求用户输入一个值，指出要显示多少行。然后显示相应行数的星号个数。每一行包含的字符数等于用户指
                   //定的行数，在星号不够的情况下前面加句点补充。
#include<iostream>

int main()
{
	using namespace std;
	int rows_num;
	cout << "Enter number of rows:";
	cin >> rows_num;
	for (int i = 0; i < rows_num; ++i)
	{
		for (int j = 0; j < rows_num -1- i; ++j)
		{
			cout << ".";
		}
		for (int k = rows_num - i - 1; k < rows_num; ++k)
		{
			cout << "*";
		}
		cout << endl;
	}
	cin.get();
	cin.get();
	return 0;
}