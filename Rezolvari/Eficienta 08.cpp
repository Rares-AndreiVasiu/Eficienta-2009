#include <iostream>
using namespace std;

int a[101], b[100], c[200];
int n, m, p;

void sub(int n, int m, int a[100], int b[100])
{
	int i = 1, j = 1, k = 0;

	while (i <= n && j <= m)
	{
		if (a[i] < b[j])
			c[++k] = a[i++];
		else
			c[++k] = b[j++];
	}

	while (i <= n)
		c[++k] = a[i++];

	while (j <= m)
		c[++k] = b[j++];

	cout << c[1] << " ";

	for (i = 2; i <= k; ++i)
		if (c[i] % 2 != c[i - 1] % 2)
			cout << c[i] << " ";
}

void main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];

	cin >> m;

	for (int i = 1; i <= m; i++)
		cin >> b[i];

	sub(n, m, a, b);
}
