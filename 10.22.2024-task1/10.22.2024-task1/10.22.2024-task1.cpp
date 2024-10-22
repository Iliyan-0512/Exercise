#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    
    int firstNumber = n / 10000 ;
    int secondNumber = (n / 1000) % 10;
    int thirdNumber = (n / 100) % 10;
    int fourthNumber = (n / 10) % 10;
    int fifthNumber = n % 10;
    int s =  fifthNumber * 10000 + fourthNumber * 1000  + thirdNumber * 100+ secondNumber * 10 + firstNumber * 1;

    
    cout << s;

    return 0;
}