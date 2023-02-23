#include <iostream>
using namespace std;

int main()
{
    int distance_AB, distance_BC, cargo_weight;
    cout << "Enter the distance between points A and B: ";
    cin >> distance_AB;
    cout << "Enter the distance between points B and C: ";
    cin >> distance_BC;
    cout << "Enter the weight of cargo: ";
    cin >> cargo_weight;

    int fuel_needed = 0;

    if (cargo_weight <= 500)
    {
        fuel_needed = distance_AB + distance_BC;
    }
    else if (cargo_weight <= 1000)
    {
        fuel_needed = 4 * (distance_AB + distance_BC);
    }
    else if (cargo_weight <= 1500)
    {
        fuel_needed = 7 * (distance_AB + distance_BC);
    }
    else if (cargo_weight <= 2000)
    {
        fuel_needed = 9 * (distance_AB + distance_BC);
    }
    else
    {
        cout << "The cargo is too heavy for the plane to take off.";
        return 0;
    }

    int fuel_available = 300;

    if (fuel_available >= fuel_needed)
    {
        cout << "No need to refuel in point B.";
    }
    else
    {
        int fuel_to_add = fuel_needed - fuel_available;
        cout << "Refuel in point B with " << fuel_to_add << " liters of fuel.";
    }

    return 0;
}
