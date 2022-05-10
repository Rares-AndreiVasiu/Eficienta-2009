#include <iostream>
#include <fstream>

std::ifstream fin("BAC.IN");

int pu, u, ok, x;

int main()
{
    while(fin >> x)
    {
        if(x & 1)
        {
            pu = x;
            break;
        }
    }
    while(fin >> x)
    {
        if(x & 1)
        {
            u = x;
            ok = 1;
            break;
        }
    }
    while(fin >> x)
    {
        if(x & 1)
        {
            pu = u;
            u = x;
        }
    }
    
    if(ok)
        std::cout << pu << ' ' << u;
    else
        std::cout << "Numere insuficiente";
    
}
