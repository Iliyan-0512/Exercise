

#include <iostream>
using namespace std;

void FillMatrixForRows(int a[50][50], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
		cout << endl;
	}
}
void PrintMatrix(int a[50][50], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
			sum += a[i][j];

		}
		cout << sum << endl;
		sum = 0;
		
	}
}
int main()
{
	int array[50][50];
	int n;
	cin >> n;
	FillMatrixForRows(array, n);
	
	PrintMatrix(array, n);
}


