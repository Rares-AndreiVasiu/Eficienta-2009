#include <iostream>
#include <fstream>
#include <string>

std::ifstream fin("NUMERE.IN");

int x, mxPalindrom, aparitiiPalindrom;

bool Palindrom(int n)
{
    if (n < 0)
        return false;

    int div = 1;

    while (n / div >= 10)
        div *= 10;

    while (n != 0)
    {
        int l = n / div;

        int r = n % 10;

        if (l != r)
            return false;

        n = (n % div) / 10;

        div /= 100;
    }
    return true;
}


int main()
{
    while (fin >> x)
    {
        if (Palindrom(x))
        {
            if (x > mxPalindrom)
            {
                aparitiiPalindrom = 1;

                mxPalindrom = x;
            }
            else
            {
                if (x == mxPalindrom)
                    aparitiiPalindrom++;
            }
        }
    }

    std::cout << mxPalindrom << '\n' << aparitiiPalindrom;

    return 0;
}
