#include <iostream>
#include <vector>
#include <set>
#include <string>

using namespace std;


//vector<string> MySplit(string sentence, vector<string> list) {
//	string word;
//
//	for (char& letter : sentence) {
//		letter = tolower(letter);
//		if (letter != ' ')
//			word.push_back(letter);
//		else {
//				list.push_back(word);
//				word = "";
//		}
//	}
//	if(!word.empty())
//		list.push_back(word);
//	cout << endl;
//	return list;
//}

vector<string> MySplit(string sentence, vector<string> list) {
	string word;
	bool inWord = false;

	for (char& letter : sentence) {
		letter = tolower(letter);
		if (letter != ' ') {
			word += letter;
			inWord = true;
		}
		else {
			if (inWord) {
				list.push_back(word);
				word = "";
				inWord = false;
			}
		}
	}
	if (inWord)
		list.push_back(word);
	return list;
}

int main() {
	setlocale(LC_ALL, "Russian");

	set<string> collection;
	string sentence;
	vector<string> list;

	getline(cin, sentence);

	list = MySplit(sentence, list);

	for (string& word : list)
		cout << word << endl;

	for (string& word : list)
		collection.insert(word);
	cout << collection.size();
}