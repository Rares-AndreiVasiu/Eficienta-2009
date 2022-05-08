#include <iostream>
#include <fstream>

std::ifstream fin("bac.in");

int f[101], n, x, mx;

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		f[x]++;

		if (x > mx)
			mx = x;
	}

	for (int i = mx; i >= 1; --i)
		if (f[i])
			std::cout << i << ' ' << f[i] << '\n';

	return 0;
}
