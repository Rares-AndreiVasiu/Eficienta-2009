#include <iostream>
#include <fstream>

std::ifstream fin("NUMERE.IN");

int f[501], x, mn = 601, mx;

int main()
{
	while (fin >> x)
	{
		if (x < mn)
			mn = x;

		if (x > mx)
			mx = x;
		f[x]++;
	}

	for (int i = mn; i <= mx; ++i)
		if (f[i] == 1)
			std::cout << i << ' ';

	return 0;
}
