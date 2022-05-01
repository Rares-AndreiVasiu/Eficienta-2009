#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int x, min1 = 99, min2 = 99, ct;

int main()
{
	fin >> x;

	while (fin >> x)
	{
		if ( (x > 9 and x < 100) or (x > -100 && x < -9))
		{
			ct++;

			if (x < min1)
			{
				min2 = min1;
				min1 = x;
				
			}
			else
			{
				if (x > min1 && x < min2)
					min2 = x;
			}
		}
	}

	if (ct > 1)
		cout << min1 << ' ' << min2;
	else
		cout << 0;
	
	return 0;
}
