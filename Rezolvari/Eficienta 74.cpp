#include <iostream>
#include <fstream>

std::ifstream fin("NUMERE.IN");

int x, f[10];

int main()
{
	fin >> x;

	while (fin >> x)
		f[x]++;
	
	x = 1;

	while (f[x] == 0)
		x++;

	std::cout << x;

	f[x]--;

	for (int i = 0; i <= 9; ++i)
		if (f[i])
			for (int j = 1; j <= f[i]; ++j)
				std::cout << i;

	return 0;
}
