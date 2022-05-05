#include <iostream>
#include <fstream>

std::ifstream fin("numere.txt");

int n, x, f[10];

void aparitiiCifre(int a)
{
	do
	{
		int digit = a % 10;

		f[digit]++;

		a /= 10;
	} while (a);
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		aparitiiCifre(x);
	}

	fin.close();

	for (int i = 0; i < 10; ++i)
		if (f[i])
			std::cout << i << ' ';

	return 0;
}
