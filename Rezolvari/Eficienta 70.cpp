#include <iostream>
#include <fstream>

std::ifstream fin("NUMERE.TXT");

int n, x, y;
int aparitiiMax, frecventa = 1, numar;

int main()
{
	fin >> n >> x;

	while (fin >> y)
	{
		if (x == y)
			frecventa ++;
		else
		{
			if (aparitiiMax < frecventa)
			{
				numar = x;
				aparitiiMax = frecventa;
			}
			frecventa = 1;
		}
		x = y;
	}

	if (aparitiiMax < frecventa)
	{
		numar = x;
		aparitiiMax = frecventa;
	}

	std::cout << numar << ' ' << aparitiiMax;

	return 0;
}
