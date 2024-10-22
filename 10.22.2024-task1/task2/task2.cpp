#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int resut = sqrt(n);
   
    if (resut*resut==n)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    
    return 0;
}