//question8.cpp --- ʹ��newΪ�ṹ�����ڴ�
#include<iostream>
#include<string>

struct piza
{
	std::string name;        //�ṹ�ɽ�string����Ϊ��Ա��string��λ�����ƿռ�std��
	float dia;
	float weight;
};

int main()
{
	using namespace std;
	piza * type = new piza;
	cout << "Enter the diameter of the piza:" << endl;
	cin >> type->dia;
	cin.get();                            //���ڶ�ȡ��������������е�\n
	cout << "Enter the name of the piza:" << endl;
	getline(cin, type->name);               //�����ַ�����getline(cin,strName) �������飺cin.getline(arrName,arrSize)
	cout << "Enter the weight of the piza:" << endl;
	cin >> type->weight;
	cout << type->name << " , " << type->dia << " , " << type->weight << endl;
	cin.get();
	cin.get();
	return 0;
}