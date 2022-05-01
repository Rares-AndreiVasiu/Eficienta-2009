#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int n, x, aparitii = 1, cifraMax;

int main()
{
	fin >> n;

	while (fin >> x)
	{
		if (x > cifraMax)
		{
			aparitii = 1;
			cifraMax = x;
		}
		else
		{
			if (x == cifraMax)
				aparitii++;
		}
	}

	cout << cifraMax << ' ' << aparitii;

	return 0;
}
