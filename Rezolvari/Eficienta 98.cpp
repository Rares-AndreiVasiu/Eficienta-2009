#include <iostream>
#include <fstream>

std::ifstream fin("DATE.TXT");

int n, m, v[3001], x[3001];

int main()
{
	fin >> n >> m;

	for (int i = 1; i <= n; ++i)
		fin >> v[i];

	for (int i = 1; i <= m; ++i)
		fin >> x[i];

	int i = 1, j = m;

	while (i <= n && j >= 1)
	{
		if (v[i] < x[j])
		{
			if (!(v[i] & 1))
				std::cout << v[i] << ' ';

			i++;
		}
		else
		{
			if (x[j] < v[i])
			{
				if (!(x[j] & 1))
					std::cout << x[j] << ' ';

				j--;
			}
			else
			{
				if (x[j] == v[i])
				{
					if (!(v[i] & 1))
						std::cout << v[i] << ' ' <<
						v[i] << ' ';

					i++;
					j--;
				}
			}
		}
	}

	while (i <= n)
	{
		if (!(v[i] & 1))
			std::cout << v[i] << ' ';

		i++;
	}

	while (j >= 1)
	{
		if (!(x[j] & 1))
			std::cout << x[j] << ' ';

		j--;
	}
}
