#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

double BinSearch(double x, double degree)
{
	/*long*/double eps = 1e-6,
		l = 0, r = 1e9, middle;
	while (r - l > eps)
	{
		middle = l + (r - l) / 2;
		if (pow(middle, degree) >= x)
			r = middle;
		else
			l = middle;
	}
	return r;
}


int main()
{
	double x, p,
		degree;
	bool signBefore = true;

	cin >> degree >> x;
	if (x < 0){
		signBefore = false;
		x *= -1;
	}

	p = BinSearch(x, degree);
	if (!signBefore)
		p *= -1;

	cout << fixed << setprecision(10) << p;
}