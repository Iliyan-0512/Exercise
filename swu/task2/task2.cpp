

#include <iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main()
{


	int t;
	cin >> t;
	bool z = true;

	if (z)
	{


		double firstNum = t / 100;
		double secondNum = (t / 10) % 10;
		double thirdNum = t % 10;
		z = firstNum == secondNum && firstNum == thirdNum && secondNum == thirdNum;


		if (z)
		{
			cout << z;
		}
		else
		{
			z = false;
			cout << z;

		}


	}

}


