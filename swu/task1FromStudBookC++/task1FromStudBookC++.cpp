

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    string command;
    cin >> command;
    if (command=="kvadrat")
    {
        int kvadratStrana;
        cin >> kvadratStrana;
        int pelimetur = kvadratStrana * 4;
        cout << pelimetur;
    }
    else if (command == "tri")
    {
        float stranaTri;
        cin >> stranaTri;
        float pelimetur = stranaTri * 3;
        float licenatrucuclnik = stranaTri * stranaTri * sqrt(3) / 4;
        cout << licenatrucuclnik;
    }
    
    

   

}

