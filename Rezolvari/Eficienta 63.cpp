#include <iostream>
#include <fstream>

std::ifstream fin("date.in");

int x, vecin1, vecin2, noduri;

int main()
{
	fin >> vecin1 >> x;

	while (fin >> vecin2)
	{
		if (x < vecin1 + vecin2)
		{
			std::cout << vecin1 << ' ' << x << ' ' << vecin2 << '\n';

			noduri++;
		}

		vecin1 = x;
		x = vecin2;
	}

	std::cout << noduri;

	return 0;
}
