// firstporgram.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int main()
{
	int a;
	cin >> a;
	if (a>=0 && a<=2)
	{
		cout << "slba 2";
	}
	else if (a >= 3 && a < 5)
	{
		cout << "sreden 3";
	}
	else if (a >= 6 && a <= 7)
	{
		cout << "dovur 4";
	}
	else if (a >= 8 && a <= 9)
	{
		cout << " 5";
	}
	else if (a == 10 )
	{
		cout << "6";
	}
	else
	{
		cout << "incoret value";
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file