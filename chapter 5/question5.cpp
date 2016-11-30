//question5.cpp --- 输入全年中每个月的销售量，通过循环，使用初始化为月份字符的char*数组（或string对象数组）逐月进行提示，并将输入
                  //的数据存储在一个int数组中，然后，程序计算数组中各元素的总数，并报告这一年的销售情况。
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	char* month[12] = { "January","February","March","April","May"," June","July","August","September","October","November","December"};
	int sale[12];
	double sum=0;
	for (int i = 0; i < 12; ++i)
	{
		cout << "Enter the " << month[i] << "th month of sale:";
		cin >> sale[i];
		sum += sale[i];
    }
	cout << "The sum of sales is:" << sum << endl;
	cin.get();
	cin.get();
	return 0;
}