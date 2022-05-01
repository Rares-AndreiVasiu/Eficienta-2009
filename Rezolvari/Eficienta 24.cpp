#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.txt");

bool flag;

int n, a, b, x, f[20000];

int main()
{
	fin >> n;

	for (int i = 1; i <= n; ++i)
	{
		fin >> x;

		f[x] = 1;
	}

	fin >> a >> b;

	for (int i = a; i <= b; ++i)
		if (f[i])
		{
			flag = true;

			cout << i;

			break;
		}

	if (!flag)
		cout << "NU";

	fin.close();

	return 0;
}
