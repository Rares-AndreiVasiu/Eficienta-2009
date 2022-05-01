#include <iostream>
#include <fstream>
using namespace std;

ifstream f1("nr1.txt");
ifstream f2("nr2.txt");

int n, m, i, j, x, y;

int main()
{
	f1 >> n >> x;

	i = 1;

	f2 >> m >> y;

	j = 1;

	while (i <= n and j <= m)
	{
		if (x < y)
		{
			i++;
			
			f1 >> x;
		}
		else
		{
			if (y < x)
			{
				j++;

				f2 >> y;
			}
			else
			{
				cout << x << ' ';

				i++;

				j++;

				f1 >> x;

				f2 >> y;
			}
		}
	}
}
