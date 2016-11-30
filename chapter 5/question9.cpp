//question9.cpp --- 使用string对象完成question8
#include<iostream>
#include<string>
int main()
{
	using namespace std;
	//char Word[20];
	string Word;
	int count = 0;
	cout << "Enter words (to stop,type the word done):\n ";
	cin >> Word;
	//while (strcmp(Word, "done"))
	while (Word != "done")
	{
		//cout << Word;
		cin >> Word;
		++count;
	}
	cout << "Your entered a total of " << count << " words." << endl;

	while (cin.get() != '\n')
		cin.get();
	return 0;
}