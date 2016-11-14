//question10.cpp --- 使用array对象来处理数据
#include<iostream>
#include<array>              //创建array对象需包含头文件array

int main()
{
	using namespace std;
	array <float,3> score;
	cout << "Enter three grades:"<<endl;
	int i=0;
	float sum=0,avr=0;
	for (i = 0; i < 3; i++)
	{
		cin >> score[i];
		cin.get();
		sum += score[i];
	}
	avr = sum / i;
	cout << i << "," << avr << endl;
	cin.get();
	return 0;
}