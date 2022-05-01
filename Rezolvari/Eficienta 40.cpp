#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bac.in");

bool flag = true;

int par = -1, impar = -1, x, n;

int main()
{
	fin >> n;

	while (fin >> x)
	{
		if (x & 1)
		{
			if (impar == -1)
				impar = x;
			else
			{
				if (x > impar)
				{
					flag = false;
					break;
				}
			}
		}
		else
		{
			if (par == -1)
				par = x;
			else
			{
				if (x < par)
				{
					flag = false;
					break;
				}
			}
		}
	}

	if (flag)
		cout << "DA";
	else
		cout << "NU";

	return 0;
}
