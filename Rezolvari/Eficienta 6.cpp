#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("BAC.TXT");

int x, y, aparitii = 1;

int main()
{
	fin >> x;

	while (fin >> y)
	{
		if (x == y)
			aparitii++;
		else
		{
			cout << x << " " << aparitii << ' ';

			aparitii = 1;
		}

		x = y;
	}

	cout << x << ' ' << aparitii;

	return 0;
}
