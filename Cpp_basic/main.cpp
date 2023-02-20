#include <iostream>
using namespace std;

int main()
{
  float pi = 3.14;
  float r, V;
  
  cout << "Введіть радіус кулі: ";
  cin >> r;
  
  V = (4.0/3.0) * pi * r * r * r;
  
  cout << "Об'єм кулі з радіусом " << r << " дорівнює " << V << endl;
  
  return 0;
}
