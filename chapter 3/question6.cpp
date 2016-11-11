//question6.cpp --- 每耗油一加仑所行驶的里程
#include <iostream>

int main()
{
	using namespace std;
	
	double mileage, oil;
	cout << "Enter the mileage:";
	cin >> mileage;
	cin.get();
	cout << "Enter the oil you have used:";
	cin >> oil;
	cin.get();
	double per_oil;
	per_oil = mileage/oil;
	cout << "one gallon can travel " << per_oil << " mile";
	cin.get();
	return 0;
}