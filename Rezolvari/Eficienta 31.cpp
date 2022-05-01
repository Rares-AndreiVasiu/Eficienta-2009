#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("numere.txt");

int x, y, n, stanga, dreapta;

int main()
{
	fin >> n;

	fin >> x >> y;

	stanga = x;

	dreapta = y;

	while (fin >> x >> y)
	{
		if (x > dreapta or y < stanga)
		{
			cout << 0;
			return 0;
		}
		else
		{
			stanga = max(stanga, x);
			dreapta = min(dreapta, y);
		}
	}

	cout << stanga << ' ' << dreapta;

	return 0;
}
