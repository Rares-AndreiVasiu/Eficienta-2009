#include <iostream>
#include <fstream>

std::ifstream fin("NUMERE.IN");
std::ofstream fout("NUMERE.OUT");

int x, mn = 100, apMin = 1, mx = -100, apMax = 1;

int main()
{	
	while (fin >> x)
	{
		if (x < mn and x > 9 and x < 100)
		{
			mn = x;
			apMin = 1;
		}
		else
		{
			if (x == mn)
				apMin++;
		}

		if (x > mx and x > 9 and x < 100)
		{
			mx = x;

			apMax = 1;
		}
		else
		{
			if (x == mx)
				apMax++;
		}
	}

	fout << mx << ' ' << apMax << '\n';

	fout << mn << ' ' << apMin;
}
