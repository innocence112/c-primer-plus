//question8.cpp ---  ʹ��char�����ѭ����ÿ�ζ�ȡһ�����ʣ�ֱ������doneΪֹ��������һ�������˼������ʡ�
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