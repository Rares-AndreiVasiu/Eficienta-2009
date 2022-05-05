#include <iostream>
#include <fstream>

std::ifstream fin("numere.txt");

int x, m3c1, m3c2, m4c = 10000, n;

int main()
{
	fin >> n;

	for (int i = 1; i <= n * n; ++i)
	{
		fin >> x;

		if (x < 1000 && x > 99)
		{
			if (x > m3c1)
			{
				m3c2 = m3c1;

				m3c1 = x;
			}
			else
			{
				if (x > m3c2)
					m3c2 = x;
			}
		}
		else
		{
			if (x > 999 and x < 10000)
				if (x < m4c)
					m4c = x;
		}
	}

	if (m3c1 - m3c2 <= m4c - m3c1)
		std::cout << m3c2 << " " << m3c1;
	else
		std::cout << m3c1 << " " << m4c;

	return 0;
}
