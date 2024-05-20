#include <iostream>
#include <string>

using namespace std;

string toDownReg(string word)
{
	for (int i = 0; i < word.size(); i++)
		word[i] = tolower(word[i]);
	return word;
}

int main()
{
	string FstWord, SndWord;
	cin >> FstWord >> SndWord;
	FstWord = toDownReg(FstWord);
	SndWord = toDownReg(SndWord);
	if (FstWord < SndWord)
		cout << "-1";
	else if (FstWord > SndWord)
		cout << "1";
	else if (FstWord == SndWord)
		cout << "0";
}