#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

ifstream fin("numere.txt");

int max_local = INT_MIN, x, n;

int main()
{
	fin >> n;

	while (fin >> x)
	{
		if (x > max_local)
			max_local = x;

		cout << max_local << ' ';
	}

	return 0;
}
