//question6.cpp --- �ṹ����
#include<iostream>

struct CandyBar                   //�ⲿ�����ṹ�壬������ȫ�ֵ���
{
	char brand[20];       //Ʒ��
	float weight;          //�ǿ�����
	int heat;              //�ǿ鿨·�ﺬ��
};

int main()
{
	using namespace std;
	CandyBar snack[3];   //����һ����Ϊsnack��CandyBar����
	snack[0] = { "num1", 2.5, 366 };                 //��ʼ���������Ԫ�ز���ʾ����
	snack[1] = { "num2", 2.3, 250 };
	snack[2] = { "num3", 2.4, 240 };
	cout << snack[0].brand << " , " << snack[0].weight << " , " << snack[0].heat << endl;
	cout << snack[1].brand << " , " << snack[1].weight << " , " << snack[1].heat << endl;
	cout << snack[2].brand << " , " << snack[2].weight << " , " << snack[2].heat << endl;
	cin.get();
	return 0;
}