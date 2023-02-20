#include <iostream>
using namespace std;

int main() {
    float length, width, height, volume;
    cout << "Обчислення об'єму паралелепіпеда.\n";
    cout << "Введіть вихідні дані:\n";
    cout << "Довжина (см) -> ";
    cin >> length;
    cout << "Ширина (см) -> ";
    cin >> width;
    cout << "Висота (см) -> ";
    cin >> height;
    volume = length * width * height;
    cout << "Об'єм: " << volume << " куб. см.\n";
    return 0;
}
