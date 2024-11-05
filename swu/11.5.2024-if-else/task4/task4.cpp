
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b;
	char op;
	cin >> a ;
	
	cin >> op;
	cin >> b;
	double c = 0.0;
	do
	{
		switch (op)
		{
		case '+': c = a + b;
			break;
		case '-': c = a - b;
			break;
		case '*': c = a * b;
			break;
		case '/': c = a / b;
			break;
		
		default:
			cout << "nevalidni danni";
			break;
		}
		cin >> a;

		cin >> op;
		cin >> b;
	} 
	while (op!='=');
	
	cout << c;
	return 0;
}


