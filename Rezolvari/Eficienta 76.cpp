#include <iostream>
#include <fstream>
#include <algorithm>

std::ifstream fin("BAC.TXT");

int n, m, x, y, i, j, v[1001], a[1001];

int main()
{
	fin >> n >> m;

	for (int k = 1; k <= n; k++)
		fin >> v[k];

	for (int k = 1; k <= m; ++k)
		fin >> a[k];

	std::sort(a + 1, a + m + 1);

	i = j = 1;

	while (i <= n and j <= m)
	{
		if (v[i] < a[j])
		{
			i++;
		}
		else
		{
			if (v[i] > a[j])
			{
				j++;
			}
			else
			{
				std::cout << v[i] << ' ';

				i++;

				j++;
			}
		}
	}

	return 0;
}
