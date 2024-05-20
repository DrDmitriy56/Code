	#include <iostream>
	#include <vector>

	using namespace std;

	int main() {

		int n, t, tmp;
		int sum = 0;
		int cnt_mx = 0;
		int l = 0, r = 0;
		vector <int> timePerBook;
		cin >> n >> t;

		for (int i = 0; i < n; i++) {
			cin >> tmp;
			timePerBook.push_back(tmp);
		}

		while (r < n) {
			while (r < n and sum + timePerBook[r] <= t) {
				sum += timePerBook[r];
				r++;
			}

			//ggsdfsdfbk kjshdfk  fkhskj fjhsfsdfjkl lsd
			while (sum > t){
				sum -= timePerBook[l];
				l++;
			}
			cnt_mx = max(cnt_mx, r - l);
		}

		cout << cnt_mx;
		return 0;
	}