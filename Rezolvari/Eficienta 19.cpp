#include <iostream>
#include <fstream>
using namespace std;

ifstream f1("nr1.txt");
ifstream f2("nr2.txt");

int n, m, i, j, x, y;

int main()
{
	f1 >> n;

	f2 >> m;

	f1 >> x;
	i = 1;

	f2 >> y;
	j = 1;

	while (i <= n and j <= m)
	{
		if (x < y)
		{
			cout << x << ' ';

			i++;

			f1 >> x;
		}
		else
		{
			if (y < x)
			{
				cout << y << ' ';

				j++;

				f2 >> y;
			}
			else
			{
				cout << x << ' ';
				f1 >> x;
				f2 >> y;
				i++;
				j++;
			}
		}
	}

	while (i <= n)
	{
		cout << x << ' ';

		i++;

		f1 >> x;
	}

	while (j <= m)
	{
		cout << y << ' ';

		j++;

		f2 >> y;
	}
}
