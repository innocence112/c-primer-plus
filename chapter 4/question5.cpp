//question5 ---  结构体声明和初始化
#include<iostream>

struct CandyBar                    //外部声明结构体，以满足全局调用
{
	char brand[20];       //品牌
	float weight;          //糖块重量
	int heat;              //糖块卡路里含量
};

int main()
{
	using namespace std;
	CandyBar snack{ "Mocha Munch", 2.3, 350 };    //定义一个名为snack的CandyBar变量，并初始化,"="可选
	cout << snack.brand << " , " << snack.weight << " , " << snack.heat << endl;
	cin.get();
	return 0;
}