//question3.cpp --- ����ָ�� BMI
#include<iostream>
const int inches_convert = 12;           //1Ӣ��=12Ӣ��
const double mile_convert = 0.0254;      //1Ӣ��=0.0254��
const double mass_convert = 2.2;         //1ǧ��=2.2��

int main()
{
	using namespace std;
	int feet, inches;
	cout << "Please input your tall with how many feet and inches." << endl;
	cin >> feet >> inches;             //������Ӣ���Ӣ��Ϊ��λ�����
	cin.get();
	double weight;
	cout << "How many pounds are you?\n";
	cin >> weight;                   //�����԰�Ϊ��λ������
	cin.get();
	int tall;
	tall = inches_convert*feet + inches;   //�����ת��Ϊ��Ӣ��Ϊ��λ
	double mile_tall;
	mile_tall = mile_convert*tall;         //�����ת��Ϊ����Ϊ��λ
	double kilogram_mass;
	kilogram_mass = mass_convert*weight;   //������ת��Ϊ��ǧ��Ϊ��λ
	double BMI;
	BMI = kilogram_mass / (mile_tall*mile_tall);     //��������ָ��BMI
	cout << "Your BMI is " << BMI << endl;
	cin.get();
	return 0;
}