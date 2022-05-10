#include <iostream>

int n, x, f[501];

int main()
{
    std::cin >> n;
    
    for(int i = 1; i <= n; ++ i)
    {
        std::cin >> x;
        
        f[x]++;
    }
    
    for(int i = 0; i < 10; ++ i)
        for(int j = 1; j <= f[i]; ++ j)
            std::cout << i << ' ';
            
    return 0;
}
