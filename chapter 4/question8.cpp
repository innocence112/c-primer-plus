//question8.cpp --- 使用new为结构分配内存
#include<iostream>
#include<string>

struct piza
{
	std::string name;        //结构可将string类作为成员，string类位于名称空间std内
	float dia;
	float weight;
};

int main()
{
	using namespace std;
	piza * type = new piza;
	cout << "Enter the diameter of the piza:" << endl;
	cin >> type->dia;
	cin.get();                            //用于读取遗留在输入队列中的\n
	cout << "Enter the name of the piza:" << endl;
	getline(cin, type->name);               //对于字符串：getline(cin,strName) 对于数组：cin.getline(arrName,arrSize)
	cout << "Enter the weight of the piza:" << endl;
	cin >> type->weight;
	cout << type->name << " , " << type->dia << " , " << type->weight << endl;
	cin.get();
	cin.get();
	return 0;
}