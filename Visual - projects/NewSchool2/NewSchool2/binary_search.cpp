#include <iostream>
#include <vector>

using namespace std;

bool DigChecker(vector <int> arr, int query)
{
	int l = 0;
	int r = arr.size() - 1;
	int middle;

	while (l <= r)
	{
		middle = l + (r - l) / 2;
		if (query > arr[middle])
		{
			l = middle + 1;
		}
		else if (query < arr[middle])
		{
				r = middle - 1;
		}
		else
			return true;
	}
	return false;
		
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k, query;   //query - запрос

	cin >> n >> k;

	vector <int> arr (n);

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < k; i++)
	{
		cin >> query;
		if (DigChecker(arr, query))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

}