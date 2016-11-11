//question2.cpp --- converts long to yard
#include<iostream>           //a PREPROCESSOR directive  预处理器编译指令，在最终编译前用iostream文件中的内容替换该编译指令

int main()
{
	using namespace std;    //make definitions visible 使程序可以使用std名称空间中的定义

	int distance1,distance2;  //定义两个整型变量distance1和distance2,分别以long和码为单位
	cin >> distance1;         //将从键盘输入的值读入distance1中
	cin.get();                //从键盘读取字符
	distance2 = distance1 * 220;//进行单位转换
	cout << distance1<<"long = "<<distance2<<"yard" << endl; 
	cin.get();
	return 0;
}