#include <iostream>
using namespace std;

int main()
{
    int num, max_num;
    cout << "Enter 7 integers: ";
    cin >> num;
    max_num = num;

    for (int i = 1; i < 7; i++)
    {
        cin >> num;
        if (num > max_num)
        {
            max_num = num;
        }
    }

    cout << "The maximum number is " << max_num << endl;

    return 0;
}
