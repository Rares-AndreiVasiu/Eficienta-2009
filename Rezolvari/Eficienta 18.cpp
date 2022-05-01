#include<iostream>
#include<fstream>
using namespace std;

ifstream fin("numere.txt");

bool flag;

int x, k, poz = 1;

int main()
{
	cin >> k;

	while (fin >> x)
	{
		if (x == k)
			flag = true;

		if (x > k)
			poz++;
	}

	if (flag)
		cout << poz;
	else
		cout << "nu exista";

	return 0;
}
