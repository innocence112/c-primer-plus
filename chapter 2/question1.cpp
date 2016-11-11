//question1.cpp --- outpt name and address
#include<iostream>           //a PREPROCESSOR directive  预处理器编译指令，在最终编译前用iostream文件中的内容替换该编译指令

int main()
{
	using namespace std;    //make definitions visible 使程序可以使用std名称空间中的定义

	cout << "My name is Rabbit.I live in the grass." << endl;  // outpt name and address
	cin.get();
	return 0;
}