#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("NUMERE.IN");

bool flag = true;

int A[101], B[101], n, m, s, indice;

int main()
{
	fin >> n >> m;

	for (int i = 1; i <= n; ++i)
		fin >> A[i];

	for (int i = 1; i <= m; ++i)
		fin >> B[i];

	indice = 1;

	for (int i = 1; i <= n; ++i)
	{
		if (s + A[i] < B[indice])
		{
			s += A[i];
		}
		else
		{
			if (s + A[i] != B[indice])
			{
				flag = false;
				break;
			}
			s = 0;
			indice++;
		}
	}
	if (flag)
		cout << "DA";
	else
		cout << "NU";

	return 0;
}
