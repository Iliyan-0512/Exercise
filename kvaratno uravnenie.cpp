

#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    double a, b, c;
    cin >> a >> b >> c;
	double x1, x2;
	if (a==0)
	{
		x1 = c / b;
		cout << x1;
	}
	else if (b==0)
	{
		x1 = (a * a) * c;
	}
	else if (c==0)
	{
		x1 = (a * a) * b;
		cout << x1;
	}
	else if (b==0 && c==0)
	{
		x1 = a * a * b * c;
		x2 == x1;
		cout << x1;

	}
	

	double D = b * b - 4 * a * c;
	
	if (D>0)
	{
		x1 = -(b + sqrt(D)) / 2 * a;
		x2 = -(b - sqrt(D)) / 2 * a;
		cout << x1 << " " << x2;
	}
	else if (D==0)
	{
		x1 = -(b) / 2 * a;
		x2 = x1;
		cout << x1<<" " << -x2;
	}
	else
	{
		cout << "no real roots";
	}
}


