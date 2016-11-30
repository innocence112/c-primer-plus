//question7.cpp --- 设计一个car结构存储有关汽车的信息。输入车辆数，然后使用new创建一个由相应数量car结构组成的动态数组。输入并显示结构内容。
#include<iostream>
#include<string>
using namespace std;         //string类位于std名称空间
struct car
{
	string manufacturer;
	int productive_year;
};
int main()
{
	int num_car=0;
	cout << "How many cars do you wish to catalog?\n";
	cin >> num_car;
	car *Car = new car[num_car];
	for (int i = 0; i < num_car; ++i)
	{
		cout << "Car #" << i+1 << ":\n";
		cout << "Please enter the make:";
		cin >> Car[i].manufacturer;
		cout << "Please enter the year made:";
		cin >> Car[i].productive_year;
	}
	cout << "Here is your collection:\n";
	for (int i = 0; i < num_car; ++i)
	{
		cout << Car[i].productive_year << " " << Car[i].manufacturer<<endl;
	}
	delete [] Car;
	cin.get();
	cin.get();
	return 0;
}