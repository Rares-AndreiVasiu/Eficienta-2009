#include <iostream>
#include <fstream>

std::ifstream fin("BAC.DAT");

int n, v[1001], m, a, b, lmax, a1, b1;

int main()
{
    fin >> n >> m;

    for(int i = 1; i <= n; ++ i)
        fin >> v[i];

    fin >> a;

    int i1 = 1;

    while(v[i1] < a)
        i1++;

    for(int j = 2; j <= m; ++ j)
    {
        fin >> b;

        int i2 = i1;

        while(i2 <= n and v[i2] <= b)
            i2++;

        if(i2 <= n)
            i2--;

        //atatea elemente din [a,b] sunt
        int lungime = i2 - i1 + 1;

        if(lungime > lmax)
        {
            lmax = lungime;

            a1 = a;

            b1 = b;

        }
        a = b;
        i1 = i2;
    }

    std::cout << a1 << " " << b1;
}
