//question10.cpp --- ʹ��Ƕ��ѭ����Ҫ���û�����һ��ֵ��ָ��Ҫ��ʾ�����С�Ȼ����ʾ��Ӧ�������ǺŸ�����ÿһ�а������ַ��������û�ָ
                   //�������������ǺŲ����������ǰ��Ӿ�㲹�䡣
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