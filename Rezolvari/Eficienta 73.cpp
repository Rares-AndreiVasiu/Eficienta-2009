#include <iostream>
#include <fstream>

std::ifstream fin("sir.in");

int n, v[1001], y;

int Cautare(int n, int x, int v[])
{
	int left = 1;
	int right = n;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (v[mid] == x)
			return mid;
		else
		{
			if (v[mid] > x)
			{
				right = mid - 1;
			}
			else
				left = mid + 1;
		}
	}
	return right + 1;
}

int main()
{
	while (fin >> y)
	{
		n++;

		if (n == 1)
			v[n] = y;
		else
		{
			int poz = Cautare(n - 1, y, v);

			for (int i = n; i > poz; --i)
				v[i] = v[i - 1];

			v[poz] = y;

		}
	}

	for (int i = 1; i <= n; ++i)
	{
		if (i % 11 == 0)
			std::cout << '\n';

		std::cout << v[i] << ' ';
	}
}
