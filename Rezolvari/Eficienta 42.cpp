#include <iostream>
#include <fstream>

std::ifstream fin("numere.txt");

int x, f[100], n;

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		f[x]++;
	}

	for (int i = 0; i < 100; ++i)
		if (f[i] == 1)
			std::cout << i << ' ';

	return 0;
}
