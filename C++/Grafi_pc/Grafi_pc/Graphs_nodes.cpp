#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, num, counter = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> num;

			if (i == j and num == 1)
				counter += 1;
		}
	}
	cout << counter;
}