#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
	int n, num, counter = 0;
	vector <pair<int, int>> ansArr;
	pair <int, int> tmp;
	cin >> n;

	//vector <vector<int>> graph(n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> num;

			if (j > i and num == 1) {
				tmp.first = i;
				tmp.second = j;
				ansArr.push_back(tmp);
			}
		}
	}

	for (auto& item : ansArr)
		cout << item.first << " " << item.second << "\n";
	//cout << counter;
}