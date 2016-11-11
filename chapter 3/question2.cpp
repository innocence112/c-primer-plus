//question3.cpp --- 体重指数 BMI
#include<iostream>
const int inches_convert = 12;           //1英尺=12英寸
const double mile_convert = 0.0254;      //1英寸=0.0254米
const double mass_convert = 2.2;         //1千克=2.2磅

int main()
{
	using namespace std;
	int feet, inches;
	cout << "Please input your tall with how many feet and inches." << endl;
	cin >> feet >> inches;             //输入以英寸和英尺为单位的身高
	cin.get();
	double weight;
	cout << "How many pounds are you?\n";
	cin >> weight;                   //输入以磅为单位的体重
	cin.get();
	int tall;
	tall = inches_convert*feet + inches;   //将身高转换为以英寸为单位
	double mile_tall;
	mile_tall = mile_convert*tall;         //将身高转换为以米为单位
	double kilogram_mass;
	kilogram_mass = mass_convert*weight;   //将体重转换为以千克为单位
	double BMI;
	BMI = kilogram_mass / (mile_tall*mile_tall);     //计算体重指数BMI
	cout << "Your BMI is " << BMI << endl;
	cin.get();
	return 0;
}