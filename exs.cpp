using namespace std;

#include <iostream>;
#include <iomanip>;

int main()
{
	/*for (int row = 1; row <= 7; row++)
	{
		for (int column = 1; column <= row; column++)
		{
			cout << column;
		}
		cout <<endl;
	}*/

	/*for (int i = 7; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j<<" ";
		}
		cout << endl;
	}*/

	int n,currentSum=0,firstN=1,secondN=2;
	cin >> n;
	do
	{
		cin >> n;
	} while (n <= 0);
	if (n==1 || n==2)
	{
		cout << 1;
	}
	for (int i = 3; i <= n; i++)
	{
		currentSum = firstN + secondN;
		firstN = secondN;
		secondN = currentSum;
	}
	cout << currentSum;
	return 0;
}


