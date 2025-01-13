
#include <iostream>
#include < iomanip >
using namespace std;
double SumAverege(int array[30], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += 1.0 * array[i] / n;
	}
	return sum;
}
int main()
{
	int array[30];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	cout << fixed << setprecision(2 )<< "AvaregeSum " << SumAverege(array, n);
}



