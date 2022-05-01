#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

ifstream fin("NUMERE.IN");

float v[101];

int n, x = INT_MAX;

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
		fin >> v[i];

	for(int i = 1; i <= n - 1; ++i)
		for (int j = i + 1; j <= n; ++j)
		{
			int capatStanga, capatDreapta, elemente;

			capatStanga = (int)v[i] + 1;
			capatDreapta = (int)v[j];

			elemente = capatDreapta - capatStanga + 1;

			if (elemente < x)
				x = elemente;
		}

	fin.close();

	cout << x;

	return 0;
}
