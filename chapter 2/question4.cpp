//question4.cpp --- �û��������䣬Ȼ����ʾ������������ٸ���
#include<iostream>

int main()
{ 
	using namespace std;

	int x, y, month; 
	cout << "Please input you age." << endl << "for example:if your age is x year y month��you should input: x enter y" << endl;
	cin >> x >> y;
	cin.get();              //�Ӽ������λ�ȡx��y���ַ�����enter��space��Ϊһ���ַ��Ľ�����־
	month = 12 * x + y;
	cout << month;
	cin.get();
	return 0;
}