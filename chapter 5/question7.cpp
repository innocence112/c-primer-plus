//question7.cpp --- ���һ��car�ṹ�洢�й���������Ϣ�����복������Ȼ��ʹ��new����һ������Ӧ����car�ṹ��ɵĶ�̬���顣���벢��ʾ�ṹ���ݡ�
#include<iostream>
#include<string>
using namespace std;         //string��λ��std���ƿռ�
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