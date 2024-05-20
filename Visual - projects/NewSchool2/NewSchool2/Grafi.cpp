//инцидентно

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, num, counter = 0;

	cin >> n;
	//vector<vector<int>> graph(n, vector<int>(n));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> num;
			//graph[i][j] = num;
			if (i == j and num == 1) {
				counter += 1;
				break;
			}
		}
	}
	cout << counter;
}