#include <iostream>
using namespace std;

int main()
{
   int num, digit1, digit2, digit3, digit4;

   cout << "Введіть чотиризначне число: ";
   cin >> num;

   if (num < 1000 || num > 9999)
   {
      cout << "Помилка: введене число не є чотиризначним." << endl;
      return 0;
   }

   digit4 = num % 10;
   digit3 = (num / 10) % 10;
   digit2 = (num / 100) % 10;
   digit1 = num / 1000;

   int newNum = digit3 * 1000 + digit4 * 100 + digit1 * 10 + digit2;

   cout << "Нове число: " << newNum << endl;

   return 0;
}
