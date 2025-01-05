

#include <iostream>
#include "Task_MenuWithTask.h"
using namespace std;
void List()
{
	cout << "Find the sum"<<endl;
	cout << "Choose the task" << endl;
	cout << "1. MainDiogonal" << endl;
	cout << "2. SecondDiogonal" << endl;
	cout << "3. OverMainDiogonal" << endl;
	cout << "4. UnderSecondDiogonal" << endl;
	cout << "5. MoreSecondDiogonal" << endl;
	cout << "6. UnderSecondDiogonal" << endl;
}
void MainDiogonalSum(int array[50][50], int n)
{
	int sum = 0;
	
	for (int i = 0; i < n; i++)
	{
		sum += array[i][i];
	}
	cout << sum;
}
void SecondDiogonalSum(int array[50][50], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i][n - i - 1];
	}
	cout << sum;
}
void OverMainDiogonal(int array[50][50], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j>i)
			{
				sum += array[i][j];
			}
		}
	}
	cout << sum;
}
void UnderMainDiogonal(int array[50][50], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i>j)
			{
				sum += array[i][j];
			}
		}
	}
	cout << sum;
}
void OverSecondDiogonal(int array[50][50], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i+j<n-1)
			{
				sum+=array[i][j];
			}
		}
	}
	cout << sum;
}
void UnderSecondDiogonal(int array[50][50], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i+j>n-1)
			{
				sum += array[i][j];
			}
		}
	}
	cout << sum;
}
void FillMatrix(int a[50][50], int n)
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


int main()
{
	List();
	int choice;
	cout << "Enter 1-6";
	cout << endl;
	cin >> choice;
	
	
	int array[50][50];
	int n;
	cin >> n;
	FillMatrix(array, n);
	
	if (choice==1)
	{
		MainDiogonalSum(array, n);
	}
	else if (choice==2)
	{
		SecondDiogonalSum(array, n);
	}
	else if (choice == 3)
	{
		OverMainDiogonal(array, n);
	}
	else if (choice == 4)
	{
		UnderMainDiogonal(array, n);
	}
	else if (choice == 5)
	{
		OverSecondDiogonal(array, n);
	}
	else if (choice == 6)
	{
		UnderSecondDiogonal(array, n);
	}
	else
	{
		cout << "Invalid choice";
	}


}


