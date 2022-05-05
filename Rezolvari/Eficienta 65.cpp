#include <iostream>
#include <fstream>

std::ifstream fin("date.in");

int vecin1, vecin2, x, pol;

int main()
{
	fin >> vecin1 >> x;

	while (fin >> vecin2)
	{
		if (x > vecin2 && x > vecin1)
			pol++;

		vecin1 = x;

		x = vecin2;
	}

	std::cout << pol;

	return 0;
}
