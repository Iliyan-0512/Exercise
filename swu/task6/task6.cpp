
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double x1, x2;
	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)

				cout << "bezkraino mnogo resheniq";

			else cout << "nqma reshenie";
		}
		else
		{
			x1 = b / c;
			cout << x1;

		}
	}
	double D = ((b * b) - (4 * a * c));
	if (D > 0)
	{
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		cout << x1 << " " << x2;
	}
	else if (D == 0)
	{
		x1 = (-b) / (2 * a);

		cout << "x1=x2=" << " " << x1;
	}
	else
	{
		cout << "nqma realni korenie";
	}
	return 0;
}