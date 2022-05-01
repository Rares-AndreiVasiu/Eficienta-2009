#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int x, f[10];

int main()
{
	while (fin >> x)
	{
		while (x)
		{
			f[x % 10]++;
			x /= 10;
		}
	}

	for (int i = 9; i >= 0; --i)
		if (f[i])
			for (int j = 1; j <= f[i]; ++j)
				cout << i;

	return 0;
}
