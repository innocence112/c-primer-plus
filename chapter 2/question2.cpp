//question2.cpp --- converts long to yard
#include<iostream>           //a PREPROCESSOR directive  Ԥ����������ָ������ձ���ǰ��iostream�ļ��е������滻�ñ���ָ��

int main()
{
	using namespace std;    //make definitions visible ʹ�������ʹ��std���ƿռ��еĶ���

	int distance1,distance2;  //�����������ͱ���distance1��distance2,�ֱ���long����Ϊ��λ
	cin >> distance1;         //���Ӽ��������ֵ����distance1��
	cin.get();                //�Ӽ��̶�ȡ�ַ�
	distance2 = distance1 * 220;//���е�λת��
	cout << distance1<<"long = "<<distance2<<"yard" << endl; 
	cin.get();
	return 0;
}