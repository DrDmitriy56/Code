#include <iostream>
#include <string>

using namespace std;

string ras()
{
	string words;
	getline(cin, words);
	for (int i = 0; i < words.size(); i++)
	{
		if (words[i] == 'e')
			words.erase(i, 1);
	}
	return words;

}

int main()
{
	string help = ras();
	cout << help;
}