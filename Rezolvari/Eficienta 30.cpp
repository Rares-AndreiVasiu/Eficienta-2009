#include <iostream>
#include <fstream>

std::ifstream fin("NUMERE.IN");

int n, k, x;

float z;

int main()
{
	fin >> n >> z;

	k = 1;
	x = z; //x va lua partea intreaga din z

	for (int i = 2; i <= n; ++i)
	{
		fin >> z;

		if (z > x + 1)
		{
			k++;

			x = z;
		}
	}

	std::cout << k;

	return 0;
}
