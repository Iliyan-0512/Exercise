

#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main()
{
	double x, y;
	cin >> x >> y;
	bool True = false;
	if (y>=(x-2)*(x-2) && (x-2)*(x-2)+y+y<4*4)
	{
		True = true;
		cout << True;
	}
	else
	{
		cout << false;
	}
}


