//question1.cpp -- 用户用整数指出自己的身高（单位英寸），然后转换为英尺和英寸。用下划线指示输入位置，用一个const符号常量表示转换因子
#include<iostream>
const int convert = 12;         //定义整形常量并赋值为12
int main()
{
	using namespace std;
	int height;
	cout << "How many inches are you?" << endl;
	cout << "_" << "\b";       //显示下划线后退格
	cin >> height;
	cin.get();
	int feet, inch;
	feet = height / convert;
	inch = height % convert;
	cout << feet << " feets " << inch << " inches " << endl;
	cin.get();
	return 0;
}