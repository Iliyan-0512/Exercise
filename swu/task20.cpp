

#include <iostream>
using namespace std;
void FillMatrix(int matrix[2][3], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << endl;
	
}
double Distance(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
void PrintMatrix(int matrix[2][3], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int Check(int a, int b, int c)
{
	if (a+b>c && a+c>b && b+c>a)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



int main()
{
	int x1, x2, y1, y2;

	int n = 2;
	int m = 3;
	int matrixA[2][3];
	int matrixB[2][3];
	int matrixC[2][3];
	FillMatrix(matrixA, 2, 3);
	FillMatrix(matrixB, 2, 3);
	FillMatrix(matrixC, 2, 3);
	x1 = matrixA[0][0];
	y1 = matrixA[1][0];
	x2 = matrixB[0][0];
	y2 = matrixB[1][0];
	double distanceAB = Distance(x1, y1, x2, y2);
	x2 = matrixC[0][0];
	y2 = matrixC[1][0];
	double distanceAC = Distance(x1, y1, x2, y2);
	x1 = matrixB[0][0];
	y1 = matrixB[1][0];
	x2 = matrixC[0][0];
	y2 = matrixC[1][0];
	double distanceBC = Distance(x1, y1, x2, y2);
	if (Check(distanceAB, distanceAC, distanceBC) == 1)
	{
		cout << " Have a Triangle ";
	}
	else
	{
		cout << "Not have a Triangle ";
	}
}
	
	
