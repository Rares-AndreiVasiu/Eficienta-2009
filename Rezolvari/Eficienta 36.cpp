#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

bool flag;

int n, x, f[10];

int cifra(int a)
{
	do
	{
		int digit = a % 10;

		if (!(digit & 1))
			return digit;

		a /= 10;

	}while (a);

	return -1;
}

int main()
{
	fin >> n;

	while (fin >> x)
	{
		int digit = cifra(x);

		if (digit != -1)
		{
			f[digit]++;

			flag = true;
		}
	}
	if (flag)
	{
		for (int i = 9; i >= 0; --i)
			if (f[i])
				for (int j = 1; j <= f[i]; ++j)
					cout << i;
	}
	else
		cout << "NU EXISTA";

	return 0;
}
