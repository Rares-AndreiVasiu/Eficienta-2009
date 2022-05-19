#include <iostream>
#include <fstream>

std::ifstream fin("DATE.TXT");

int v[10001], st, dr, l = 1, lmax, i;

int main()
{
    fin >> v[++i];

    while (fin >> v[++i])
    {
        if (v[i - 1] % 2 != v[i] % 2)
        {
            l++;
        }
        else
        {
            if (l > lmax)
            {
                lmax = l;

                dr = i - 1;
                st = i - l;
            }
            l = 1;
        }
    }

    if (l > lmax)
    {
        lmax = l;

        dr = i - 1;
        st = i - l;
    }
    std::cout << lmax << '\n';

    for (int i = st; i <= dr; ++i)
        std::cout << v[i] << ' ';

    return 0;
}

/*
#include <iostream>
#include <fstream>

std::ifstream fin("DATE.TXT");

int v[1000001], l = 1, i1 = 1, lmax = 1, x, i = 1;

int main()
{
    fin >> v[1];

    while(fin >> x)
    {
        i++;

        v[i] = x;

        if(v[i] % 2 != v[i - 1] % 2)
        {
            l++;

            if(l > lmax)
            {
                lmax = l;

                i1 = i - lmax + 1;

            }
        }
        else
            l = 1;
    }

    std::cout << lmax << '\n';

    for(i = i1; i < i1 + lmax; ++ i)
        std::cout << v[i] << ' ';

    return 0;
}

*/
