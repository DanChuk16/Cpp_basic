#include <iostream>
using namespace std;

int main()
{
    int year, days;
    cout << "Enter the year: ";
    cin >> year;
    days = 365 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    cout << "In " << year << " year = " << days << " days\n";
    return 0;
}
