#include <iostream>
using namespace std;

int main()
{
   int num;

   cout << "Введіть число: ";
   cin >> num;

   if (num % 2 == 0)
   {
      cout << num << " є парним." << endl;
   } else
   {
      cout << num << " не є парним." << endl;
   }

   return 0;
}
