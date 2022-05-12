#include <iostream>
#include <fstream>

std::ifstream fin("DATE.TXT");

int v[10001], st, dr, l = 1, lmax, i;

int main()
{
	fin >> v[++i];

	while (fin >> v[++i])
	{
		if (v[i - 1] % 2 != v[i] % 2)
		{
			l++;
		}
		else
		{
			if (l > lmax)
			{
				lmax = l;

				dr = i - 1;
				st = i - l;
			}
			l = 1;
		}
	}
	std::cout << lmax << '\n';

	for (int i = st; i <= dr; ++i)
		std::cout << v[i] << ' ';
	
	return 0;
}
