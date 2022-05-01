#include <iostream>
#include <fstream>

std::ifstream f1("NR1.TXT");

std::ifstream f2("NR2.TXT");

int x, y;

int main()
{
	f1 >> x;

	f2 >> y;

	while (f1 && f2)
	{
		if (x % 5 != 0)
			f1 >> x;

		if (y % 5 != 0)
			f2 >> y;

		if (x % 5 == 0 && y % 5 == 0)
		{
			if (x < y)
			{
				std::cout << x << " ";

				f1 >> x;
			}
			else
			{
				if (x > y)
				{
					std::cout << y << " ";

					f2 >> y;
				}
				else
				{
					f1 >> x;

					f2 >> y;
				}
			}
		}

		//daca s-a terminat un sir atunci mai cautam in alalalt
		if (x % 5 == 0 && !f2)
		{
			std::cout << x << " ";

			f1 >> x;
		}

		if (y % 5 == 0 && !f1)
		{
			std::cout << y << " ";

			f2 >> y;
		}
	}

	f1.close();
	f2.close();

	return 0;
}
