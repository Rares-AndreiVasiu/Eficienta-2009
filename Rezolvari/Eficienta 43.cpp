#include <iostream>
#include <fstream>

std::ifstream fin("numere.txt");

int n, f[101];

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		int x;

		fin >> x;

		f[x]++;
	}

	for (int i = 9; i >= 0; --i)
	{
		if (f[i])
		{
			for (int j = 1; j <= f[i]; ++j)
				std::cout << i;
		}
	}

	return 0;
}
