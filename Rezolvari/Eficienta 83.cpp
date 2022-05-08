#include <iostream>
#include <fstream>
#include <climits>
std::ifstream fin("NUMERE.IN");

int x, lungime, mxLocal, lungimeMinima = INT_MAX, mxGlobal;

int main()
{
	while (fin >> x)
	{
		if (x != 0)
		{
			lungime++;

			if (x > mxLocal)
				mxLocal = x;
		}
		else
		{
			if (lungime < lungimeMinima)
			{
				lungimeMinima = lungime;

				mxGlobal = mxLocal;
			}
			else
			{
				if (lungime == lungimeMinima)
					if (mxLocal > mxGlobal)
						mxGlobal = mxLocal;
			}
			lungime = 0;
			mxLocal = 0;
		}
	}

	std::cout << mxGlobal;

	return 0;
}
