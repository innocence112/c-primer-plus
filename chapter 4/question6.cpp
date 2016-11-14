//question6.cpp --- 结构数组
#include<iostream>

struct CandyBar                   //外部声明结构体，以满足全局调用
{
	char brand[20];       //品牌
	float weight;          //糖块重量
	int heat;              //糖块卡路里含量
};

int main()
{
	using namespace std;
	CandyBar snack[3];   //定义一个名为snack的CandyBar数组
	snack[0] = { "num1", 2.5, 366 };                 //初始化数组各个元素并显示出来
	snack[1] = { "num2", 2.3, 250 };
	snack[2] = { "num3", 2.4, 240 };
	cout << snack[0].brand << " , " << snack[0].weight << " , " << snack[0].heat << endl;
	cout << snack[1].brand << " , " << snack[1].weight << " , " << snack[1].heat << endl;
	cout << snack[2].brand << " , " << snack[2].weight << " , " << snack[2].heat << endl;
	cin.get();
	return 0;
}