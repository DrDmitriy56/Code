//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main() {
//	string arr;
//	string last;
//	stack <char> st;
//	cin >> arr;
//	int n = arr.size();
//
//	for (int i = 0; i < n; i++) {
//		if (arr[i] == '[' or arr[i] == '(')
//			st.push((arr[i]));
//		else if (!st.empty() and (arr[i] == ']' and st.top() == '[' or arr[i] == ')' and st.top() == '(')) {
//			st.pop();
//		}
//	}
//	if (st.empty())
//		cout << "Yesssss";
//	else
//		cout << "Not this time((";
//
//}