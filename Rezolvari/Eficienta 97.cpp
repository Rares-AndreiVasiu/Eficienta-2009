#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream fin("DATE.IN");

int n;

int main()
{
	fin >> n;

	int a = (int)std::sqrt(n);

	for (int i = 1; i <= a; ++i)
	{
		int sq = n - i * i;

		int b = std::sqrt(sq);

		if (b * b == sq && i <= b)
			std::cout << i << ' ' << b << '\n';
	}
}
