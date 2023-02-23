#include <iostream>
using namespace std;

int main()
{
   int num1, num2;

   cout << "Перше число: ";
   cin >> num1;

   cout << "Друге число: ";
   cin >> num2;

   if (num1 < num2)
   {
      cout << "Менше число: " << num1 << endl;
   } else {
      cout << "Менше число: " << num2 << endl;
   }

   return 0;
}

