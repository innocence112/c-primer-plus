//question1.cpp -- �û�������ָ���Լ�����ߣ���λӢ�磩��Ȼ��ת��ΪӢ�ߺ�Ӣ�硣���»���ָʾ����λ�ã���һ��const���ų�����ʾת������
#include<iostream>
const int convert = 12;         //�������γ�������ֵΪ12
int main()
{
	using namespace std;
	int height;
	cout << "How many inches are you?" << endl;
	cout << "_" << "\b";       //��ʾ�»��ߺ��˸�
	cin >> height;
	cin.get();
	int feet, inch;
	feet = height / convert;
	inch = height % convert;
	cout << feet << " feets " << inch << " inches " << endl;
	cin.get();
	return 0;
}