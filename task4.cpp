

#include <iostream>
#include <string>
using namespace std;

int main()
{
	double a[30];
	int n;
	double evenSum = 0;
	double oddSum = 0;
	do
	{
		cin >> n;
	} while (n < 1||n > 30);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i]>0)
		{
			evenSum += a[i];
		}
		else
		{
			oddSum += a[i];
		}
	}
	cout << evenSum << endl;
	cout << oddSum << endl;
	cout << "result" << " " << evenSum + oddSum << endl;
}


