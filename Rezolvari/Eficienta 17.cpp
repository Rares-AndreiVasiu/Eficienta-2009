#include <iostream>
#include <fstream>

std::ifstream fin("numere.txt");

int x, n, poz, prim;

int main()
{
    fin >> n;
    
    fin >> prim;
    
    poz = 1;
    
    for(int i = 2; i <= n; ++ i)
    {
        fin >> x;
        
        if(x < prim)
            poz++;
    }
    
    std::cout << poz;
    
    return 0;
}
