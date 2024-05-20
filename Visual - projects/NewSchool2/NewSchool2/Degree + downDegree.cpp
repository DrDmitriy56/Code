#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;

double QwudSqrtBinSearch(double x)
{
	/*long*/double eps = 1e-5,
		l = 0, r = 1e9, middle;
	while (r - l > eps)
	{
		middle = l + (r - l) / 2;
		if ( pow(middle,2) >= x)
			r = middle;
		else
			l = middle;
	}
	return r;
}

double BinSearch(double x)
{
	/*long*/double eps = 1e-6,
		l = 0, r = 1e9, middle;
	while (r - l > eps)
	{
		middle = l + (r - l) / 2;
		if ( pow(middle,2) + QwudSqrtBinSearch(middle) >= x)
			r = middle;
		else
			l = middle;
	}
	return r;
}


int main()
{
	double x, p;

	cin >> x;

	p = BinSearch(x);

	cout << fixed << setprecision(10) << p;
}