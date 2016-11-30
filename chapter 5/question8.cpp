//question8.cpp ---  使用char数组和循环来每次读取一个单词，直到输入done为止。最后计算一个输入了几个单词。
#include<iostream>

int main()
{
	using namespace std;
	char Word[20];
	int count = 0; 
	cout << "Enter words (to stop,type the word done):\n ";
	cin >> Word;
	while (strcmp(Word, "done"))
	{
		//cout << Word;
		cin >> Word;
		++count;
	}
	cout << "Your entered a total of "<<count<<" words."<<endl;

	while (cin.get() != '\n')
		cin.get();
	return 0;
}