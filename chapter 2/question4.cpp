//question4.cpp --- 用户输入年龄，然后显示该年龄包含多少个月
#include<iostream>

int main()
{ 
	using namespace std;

	int x, y, month; 
	cout << "Please input you age." << endl << "for example:if your age is x year y month，you should input: x enter y" << endl;
	cin >> x >> y;
	cin.get();              //从键盘依次获取x和y的字符，以enter或space作为一个字符的结束标志
	month = 12 * x + y;
	cout << month;
	cin.get();
	return 0;
}