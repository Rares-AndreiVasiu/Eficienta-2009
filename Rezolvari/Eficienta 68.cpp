#include <iostream>
#include <fstream>

std::ifstream fin("SIR.TXT");

int n, x, y;
int platou, l = 1, nrPlatou;

int main()
{
	fin >> n >> x;

	while (fin >> y)
	{
		if (x == y)
		{
			l++;
		}
		else
		{
			if (l >= platou)
			{
				platou = l;

				nrPlatou = x;
			}
			l = 1;
		}
		x = y;
	}

	if (l >= platou)
	{
		platou = l;

		nrPlatou = x;
	}

	std::cout << platou << ' ' << nrPlatou;

	return 0;
}
