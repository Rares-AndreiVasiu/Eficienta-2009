#include <iostream>
#include <fstream>

std::ifstream fin("bac.in");

int f[101], x, n, mxAparitii;

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		f[x]++;
	}

	for (int i = 1; i <= 100; ++i)
		if (f[i] > mxAparitii)
			mxAparitii = f[i];

	for (int i = 1; i <= 100; ++i)
		if (mxAparitii == f[i])
			std::cout << i << ' ';

	return 0;
}
