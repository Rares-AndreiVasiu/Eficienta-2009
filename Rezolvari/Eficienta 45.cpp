#include <iostream>
#include <fstream>

std::ifstream fin("numere.txt");

int x, n, f[100];

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		f[x]++;
	}

	for (int i = 0; i < 100; ++i)
	{
		if (f[i])
		{
			for (int j = 1; j <= f[i]; ++j)
				std::cout << i << ' ';
		}
	}

	return 0;
}
