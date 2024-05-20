#include <iostream>
#include <vector>
#include <string>

using namespace std;

string Shortener(string reduced)
{
	string helpStr;
	helpStr = reduced[0] + to_string(reduced.size() - 2) + reduced[reduced.size() - 1];    //maybe out range....
	return helpStr;
}

int main()
{
	int num;
	int maxSize = 10;
	cin >> num;
	vector <string> arr(num);

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		if (arr[i].length() > maxSize)
			arr[i] = Shortener(arr[i]);
	}
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << endl;
	}
}