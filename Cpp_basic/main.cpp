#include <iostream>
using namespace std;

int main()
{
    double scale, distance_on_map, distance;
    cout << "Обчислення відстані між населеними пунктами.\n";
    cout << "Введіть вихідні дані:\n";
    cout << "Масштаб карти (кількість кілометрів в одному сантиметрі) -> ";
    cin >> scale;
    cout << "Відстань між точками, які зображують населені пункти (см) -> ";
    cin >> distance_on_map;
    distance = distance_on_map * scale;
    cout << "Відстань між населеними пунктами " << distance << " км.\n";
    return 0;
}
