#include <iostream>
#include <fstream>
#include <climits>
#include <cmath>

std::ifstream fin("bac.txt");

int x, y, smax, difmax = INT_MAX, a, b;

int main()
{
	fin >> x;

	while (fin >> y)
	{
		if (x > 0 and y > 0)
		{
			int dif = std::abs(x - y);
			int suma = x + y;

			if (suma > smax)
			{
				a = x;
				b = y;

				difmax = dif;
				smax = suma;
			}
			else
			{
				if (suma == smax)
					if (difmax < dif)
					{
						difmax = dif;
						a = x;
						b = y;
					}
			}
		}
		x = y;
	}

	std::cout << a << ' ' << b;
}
