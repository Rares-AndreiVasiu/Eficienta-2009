#include <iostream>
#include <fstream>

std::ifstream fin("bac.txt");

int f[101], x, k, mx;

int main()
{
	std::cin >> k;

	while (fin >> x)
	{
		if (x > mx)
			mx = x;

		f[x]++;
	}

	for (int i = mx; i >= k + 1; --i)
		if (f[i])
			std::cout << i << ' ';

	return 0;
}
