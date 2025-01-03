

#include <iostream>
using namespace std;
int FillMatrix(int a[60][65], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
}
void MoveRow(int a[60][65], int n, int m, int row)
{
	int temp;
	for (int i = 0; i < m; i++)
	{
		temp = a[n][i];
		a[n][i] = a[n + 1][i];
		a[n + 1][i] = temp;
	}
}
int main()
{
	int a[60][65];
	int n,m;
	int k;
	cin >> n >> m;
	FillMatrix(a, n, m);
	
}


