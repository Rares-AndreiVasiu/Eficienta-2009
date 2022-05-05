#include <iostream>
#include <fstream>

std::ifstream fin("date.in");
std::ofstream fout("date.out");

int x, f[101];

int main()
{
	while (fin >> x)
		f[x]++;

	for (int i = 1; i <= 99; i += 2)
		if (f[i])
			fout << i << ' ';

	fout << '\n';
	
	for (int i = 98; i >= 10; i -= 2)
		if (f[i])
			fout << i << ' ';

	return 0;
}
