#include <iostream>
using namespace std;

int main()
{
    int hryvnia, kopiyka;
    cout << "Enter the amount in hryvnias and kopecks: ";
    cin >> hryvnia >> kopiyka;

    if (kopiyka > 99) {
        hryvnia += kopiyka / 100;
        kopiyka %= 100;
    }

    hryvnia += kopiyka / 100;
    kopiyka %= 100;

    cout << "Corrected amount: " << hryvnia << " hryvnias " << kopiyka << " kopecks" << endl;

    return 0;
}
