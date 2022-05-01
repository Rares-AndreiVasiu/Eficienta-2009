#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("numere.txt");

int n, mx;

int max(int x[], int n)
{
	int a = x[1];
	int b = x[2];

	if (a > b)
	{
		return a;
	}
	else
	{
		return x[n];
	}
}

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		bool ok = true;
		int v[101] = { 0 };
		int a1, a2, ratie;

		fin >> v[1] >> v[2];

		a1 = v[1];
		a2 = v[2];

		ratie = a2 - a1;

		for (int j = 3; j <= n; ++j)
		{
			fin >> v[i];

			if (v[i] - a2 != ratie)
				ok = false;

			a2 = v[i];
		}

		if (ok)
		{
			int mxLocal = max(v, n);

			if (mxLocal > mx)
				mx = mxLocal;
		}
	}

	cout << mx;
}
