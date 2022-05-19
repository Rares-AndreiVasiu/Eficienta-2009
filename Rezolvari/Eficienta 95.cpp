#include <iostream>
#include <fstream>

std::ofstream fout("rez.dat");

int s;

int main()
{
    std::cin >> s;

    if(s % 3 == 0)
    {
        fout << s / 3 << ' ' << s / 3 << ' ' << s / 3;
    }

    if(s % 3 == 1)
    {
        fout << s / 3 << ' ' << s / 3 << s / 3 + 1;
    }

    if(s % 3 == 2)
    {
        fout << s / 3 << ' ' << s / 3 + 1 << ' ' << s / 3 + 1;
    }

}
