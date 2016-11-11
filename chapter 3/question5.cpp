//question5.cpp --- 某国人口占全球人口百分比
#include<iostream>

int main()
{
	using namespace std;

	long long global_population,US_population;
	cout << "Enter the world's population:";
	cin >> global_population;
	cin.get();
	cout << "Enter the population of the US:";
	cin >> US_population;
	cin.get();
	double percent;
	percent = double(US_population) / double(global_population) * 100;
	cout << "The population of the US is " << percent << "% of the world population.\n";
	cin.get();
	return 0;
}