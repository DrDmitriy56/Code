#include <iostream>
#include <iomanip>

using namespace std;


int Search(int r, int w,int h, int n)
{
	int l = 0;
	long long int x, middle;
	while (r - l > 1)
	{
		middle = (l + r) / 2;
		if ((middle/w) * (middle/h) >= n)
			r = middle;
		else
			l = middle;
	}
	return r;
}

int main()
{
	int wide, height, n, x;
	cin >> wide >> height >> n;

	x = Search(max(height,wide)*n, wide, height,n);
	cout << x;

}