#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("BAC.TXT");

int a, b, c, n, k, indice;
double ma, mx;

int main()
{
	fin >> n >> k;

	fin >> a >> b;

	for (int i = 3; i <= n - k + 1; ++i)
	{
		fin >> c;

		ma = (double)((a + b + c) / 3);

		if (ma > mx)
		{
			mx = ma;

			indice = i - 2;
		}

		a = b;

		b = c;
	}

	cout << indice;

	return 0;
}
