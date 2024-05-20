//#include <iostream>
//#include <set>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector <string> MySplit(string sentence, vector<string> list) {
//	string word;
//	bool inWord = false;
//
//	for (char& letter : sentence) {
//		letter = tolower(letter);
//		if (letter != ' ') {
//			word += letter;
//			inWord = true;
//		}
//		else {
//			if (inWord) {
//				list.push_back(word);
//				word = "";
//				inWord = false;
//			}
//		}
//	}
//	if (inWord)
//		list.push_back(word);
//	return list;
//}
////
////int main() {
////	set<float> nums;
////	string sentence;
////
////	getline(cin, sentence);
////
////	vector<string> collection = MySplit(sentence, collection);
////
////	for (string& number : collection)
////		nums.insert(stof(number));
////	for (auto& number : nums)
////		cout << number << " ";
////}