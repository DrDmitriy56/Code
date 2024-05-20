#include <iostream>

using namespace std;

int main()
{
	string NickName;
	cin >> NickName;
	if (NickName.size() % 2 == 0)
		cout << ("CHAT WITH HER!");
	else
		cout << "IGNORE HIM!";
}