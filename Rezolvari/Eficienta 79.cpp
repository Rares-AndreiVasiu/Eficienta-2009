#include <iostream>
#include <fstream>

std::ifstream fin("numere.in");

bool flag;

int f[101], x, n;

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		f[x]++;
	}

	for (int i = 1; i <= 100; ++i)
		if (!f[i])
		{
			std::cout << i << ' ';

			flag = true;
		}

	if (!flag)
		std::cout << "NU LIPSESTE NICIUN NUMAR";

	return 0;
}
