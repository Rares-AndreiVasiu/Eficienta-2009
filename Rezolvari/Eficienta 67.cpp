#include <iostream>
#include <fstream>

std::ifstream fin("NUMERE.TXT");

int n, x, y;

int main()
{
	fin >> n >> x;

	std::cout << x << ' ';

	while (fin >> y)
	{
		if (x != y)
			std::cout << y << ' ';

		x = y;
	}

	return 0;
}
