
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a, b, c,s;
	cin >> a >> b >> c;
	double p = (a + b + c) / 2;
	if (a>0 && a+b>c && b > 0 && b + c > a && c > 0 && a + c > b)
	{

		s = sqrt(p*(p - a) * (p - b) * (p - c));
		cout << s;
	}
	
	else
	{
		cout << "ne e triuguinik;";
	}


}


