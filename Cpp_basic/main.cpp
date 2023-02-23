#include <iostream>
using namespace std;

int main()
{
   int num;
   int sum1 = 0, sum2 = 0;

   cout << "Введіть шестизначне число: ";
   cin >> num;

   if (num < 100000 || num > 999999)
   {
      cout << "Помилка: введене число не є шестизначним." << endl;
      return 0;
   }

   for (int i = 0; i < 3; i++)
   {
      sum1 += num % 10;
      num /= 10;
   }

   for (int i = 0; i < 3; i++)
   {
      sum2 += num % 10;
      num /= 10;
   }

   if (sum1 == sum2)
   {
      cout << "Це щасливе число!" << endl;
   } else {
      cout << "Це не щасливе число." << endl;
   }

   return 0;
}
