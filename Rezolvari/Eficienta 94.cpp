#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

std::ifstream fin("numar.txt");

int n;

void swap(char* a, char* b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void findNext(int n)
{
	std::string s = std::to_string(n);

	int i, j, l;

	l = s.length();

	for (i = l - 1; i > 0; --i)
		if (s[i] > s[i - 1])
			break;

	if (i == 0)
	{
		std::cout << "Nu exista";
		return;
	}

	int x = s[i - 1], smallest = i;

	for (j = i + 1; j < l; ++j)
		if (s[j] > x and s[j] < s[smallest])
			smallest = j;

	swap(&s[smallest], &s[i - 1]);

	std::sort(s.begin()+ i, s.begin() + l);

	std::cout << s;

	return;
}

int main()
{
	fin >> n;

	findNext(n);

	return 0;
}
