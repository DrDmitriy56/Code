#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
	int n, num, counter = 0;
	int evenCt = 0, oddCt = 0;
	map <int, int> nodes;
	cin >> n;

	vector <vector<int>> graph(n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> num;
			if (num == 1 and i != j)
				nodes[i] += 1;
		}
	}

	for (auto& item : nodes)
		if (item.second % 2 == 0)
			evenCt += 1;
		else
			oddCt += 1;

	cout << evenCt << " " << oddCt;

}