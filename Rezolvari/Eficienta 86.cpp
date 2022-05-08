#include <iostream>
#include <fstream>

std::ifstream fin("bac.txt");

int x, par1, par2;

int main()
{
	while (fin >> x)
	{
		if (!(x & 1))
		{
			if (x > par1)
			{
				par2 = par1;
				par1 = x;
			}
			else
			{
				if (x > par2)
					par2 = x;
			}
		}
	}

	std::cout << par1 << ' ' << par2;

	return 0;
}
