#include <iostream>
#include <fstream>

std::ifstream fin("date.in");

int start, final, x, y, ct = 1, v[10001], k = 0, mx;

int main()
{
	fin >> x;

	v[++k] = x;

	while (fin >> y)
	{
		v[++k] = y;

		if (y < x)
		{
			ct++;
		}
		else
		{
			if (ct > mx)
			{
				start = k - ct;

				final = k - 1;
				
				mx = ct;
			}

			ct = 1;
		}
		x = y;
	}

	for (int i = start; i <= final; ++i)
		std::cout << v[i] << ' ';

	return 0;
}
