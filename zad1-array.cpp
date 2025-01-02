

#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int b[20];
	int n;
	double result=0;
	cin >> n;
	for (int i = 0; i <n; i++)
	{
		cin >> a[i];
		cin >> b[i];
		

	}
	for (int i = 0; i < n; i++)
	{
		result += a[i] * b[i];
	}
	cout << result;
	
	

}


