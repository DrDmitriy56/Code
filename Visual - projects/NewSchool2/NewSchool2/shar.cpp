//#include <iostream>
//#include <set>
//#include <string>
//
//using namespace std;
//
//int main() {
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios_base::sync_with_stdio(0);
//
//	int n, m;
//	string tmp;
//	cin >> n >> m;
//	set<string> polshar, vragshar;
//	for (int i = 0; i < n; i++) {
//		getline(cin, tmp);
//		polshar.insert(tmp);
//	}
//	for (int i = 0; i < m; i++) {
//		getline(cin, tmp);
//		vragshar.insert(tmp);
//	}
//	set<string> setC;
//
//	set_difference(polshar.begin(), polshar.end(),
//		vragshar.begin(), vragshar.end(),
//		inserter(setC, setC.begin()));
//	
//	/*while (true) {
//		auto iter = polshar.begin();
//		int first = iter;
//	}*/
//
//
//}