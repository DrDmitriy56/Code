#include <iostream>
#include <string>

using namespace std;


string Capitaliser()
{
	string word;
	getline(cin, word);
	word[0] = toupper(word[0]);
	return word;
}

int main()
{
	string theWord = Capitaliser();
	cout << theWord;
}