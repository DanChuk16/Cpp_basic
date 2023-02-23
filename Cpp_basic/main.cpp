#include <iostream>
using namespace std;

int main()
{
   int num1, num2;

   cout << "Введіть перше число: ";
   cin >> num1;

   cout << "Введіть друге число: ";
   cin >> num2;

   if (num1 == num2)
   {
      cout << "Числа рівні." << endl;
   }
   else
   {
      cout << "Числа не рівні. Їхні значення за зростанням: ";
      if (num1 < num2)
      {
         cout << num1 << ", " << num2 << endl;
      }
      else
      {
         cout << num2 << ", " << num1 << endl;
      }
   }

   return 0;
}
