#include <iostream>
#include <fstream>

std::ifstream fin("SIR.IN");

typedef unsigned long long int ULLI;
typedef unsigned int UI;

int n, x, y, suma;

UI bin_pow(UI a, ULLI n)
{
    UI result = 1;
    while (n)
    {
        if (n & 1)
        {
            result = (result * a) % 10;
            n -= 1;
        }
        else
        {
            a = (a * a) % 10;
            n >>= 1;
        }
    }
    return result;
}

int main()
{
    fin >> n;

    for (int i = 1; i <= n; ++i)
    {
        fin >> x >> y;

        suma = (suma + bin_pow(x, y)) % 10;
    }

    std::cout << suma;
}
