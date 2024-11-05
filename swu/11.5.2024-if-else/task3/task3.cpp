
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int h1, m1, s1, h2, m2, s2,result,totalSecund, totalMinutw, totalHour;
	cin >> h1 >> m1 >> s1;
	cin >> h2 >> m2 >> s2;
	totalSecund = s1 + s2;
	totalMinutw = m1 + m2;
	totalHour = h1 + h2;
	if (totalSecund>60)
	{
		totalSecund -= 60;
		totalMinutw++;
	}
	else if ((totalMinutw > 60))
	{
		totalMinutw -= 60;
		totalHour++;
	}
	
	cout << totalHour << ":" << totalMinutw << ":" << totalSecund;
	return 0;
}


