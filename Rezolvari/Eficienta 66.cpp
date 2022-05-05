#include <iostream>
#include <fstream>
#include <cmath>

std::ifstream finA("A.TXT");
std::ifstream finB("B.TXT");

int a, b, minB, ct;

int main()
{
	finB >> b;

	minB = b;

	while (finB >> b)
		minB = std::min(b, minB);

	while (finA >> a)
	{
		if (a < minB)
			ct++;
	}

	std::cout << ct;
}
