#include <iostream>
#include <map>

using namespace std;

int main() {
	int queris;
	string nickname;
	map <string, int> dict;
	cin >> queris;
	
	for (int i = 0; i < queris; i++) {
		cin >> nickname;
		dict[nickname] += 1;
	}

	for (const auto& nickname : dict) {
		if (nickname.second > 1)
			cout << nickname.first << "\n";
	}
	
}