

#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	if (x>0 && y>0)
	{
		cout << "First";
	}
	else if (x<0 && y>0)
	{
		cout << "Secound";
	}
	else if (x<0 && y<0)
	{
		cout << "Third";
	}
	else if (x > 0 && y < 0)
	{
		cout << "fourth";
	}
	else if (x==0 && y==0)
	{
		cout << "tochkata e v centura";
	}
	else if (x >0 || x<0 && y == 0)
	{
		cout << "tochkata prinadleshi na kordinantite osi";
	}
	else if (y > 0 || y < 0 && x == 0)
	{
		cout << "tochkata prinadleshi na kordinantite osi";
	}
	
}


