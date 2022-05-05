#include <iostream>
#include <fstream>

std::ifstream fin("NUMERE.TXT");

int v[10001], n, x, k;

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		if (x & 1)
			v[++k] = x;
		else
			std::cout << x << ' ';
	}

	for (int i = k; i >= 1; --i)
		std::cout << v[i] << ' ';

	return 0;
}
