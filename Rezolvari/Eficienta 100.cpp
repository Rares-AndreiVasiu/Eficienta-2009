// Online C++ compiler to run C++ program online
#include <iostream>
#include <fstream>

std::ifstream fin("SIR.TXT");

int x, k, a, b, c;

int main() {
    
    std::cin >> x >> k;
    
    if(x <= 8)
    {
        a = b = 1;
    }
    else
    {
        if(x == 9)
        {
            a = 1; 
            b = 2;
        }
        else
            a = b = 2;
    }
    
    while(b < k)
    {
        c = a+ b;
        
        a = b;
        
        b = c;
    }
    
    for(int i = 1; i <= a; ++ i)
    {
        char y;
        
        std::cin >> y;
        
        std::cout << y;
    }
    return 0;
}
