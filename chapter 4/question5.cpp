//question5 ---  �ṹ�������ͳ�ʼ��
#include<iostream>

struct CandyBar                    //�ⲿ�����ṹ�壬������ȫ�ֵ���
{
	char brand[20];       //Ʒ��
	float weight;          //�ǿ�����
	int heat;              //�ǿ鿨·�ﺬ��
};

int main()
{
	using namespace std;
	CandyBar snack{ "Mocha Munch", 2.3, 350 };    //����һ����Ϊsnack��CandyBar����������ʼ��,"="��ѡ
	cout << snack.brand << " , " << snack.weight << " , " << snack.heat << endl;
	cin.get();
	return 0;
}