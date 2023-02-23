#include <iostream>
using namespace std;

int main()
{
   int num;

   cout << "Введіть число: ";
   cin >> num;

   if (num > 0)
   {
      cout << num << " є додатнім числом." << endl;
   } else if (num < 0)
   {
      cout << num << " є від'ємним числом." << endl;
   } else
   {
      cout << num << " дорівнює нулю." << endl;
   }

   return 0;
}
