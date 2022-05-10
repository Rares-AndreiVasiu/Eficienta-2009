#include <iostream>
#include <cmath>
using namespace std;

int n, k;

int main()
{
  cin >> n;
  
  k = (-1 + sqrt(1 + 8*n)) / 2;
  
  if(k * (k + 1) / 2 == n)
    cout << 1;
  else
  {
    int x= n - k * (k + 1) / 2;
    
    cout << k + 1 - x;
  }
  
  return 0;
}
