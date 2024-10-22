#include <iostream>
using namespace std;

int main()
{
    double xa, ya,xb,yb;
    cin >> xa >> ya>>xb>>yb;
    double result =sqrt( pow(xa - xb, 2) + pow(ya - yb, 2));
    cout << result;


    return 0;
}