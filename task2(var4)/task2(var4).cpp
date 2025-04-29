#include <iostream>
#include <string>
#include "Airplanes.h"
#include <ctime>

using namespace std;

void inputAirplaneData(Airplane& plane)
{
    string manufacturer, model, type;
    double maxSpeed, fuelCapacity;
    int flightRange, capacity;

    cout << "Enter manufacturer: ";
    getline(cin, manufacturer);
    plane.setManufacturer(manufacturer);

    cout << "Enter model: ";
    getline(cin, model);
    plane.setModel(model);

    cout << "Enter type: ";
    getline(cin, type);
    plane.setType(type);

    cout << "Enter max speed(km/hours): ";
    cin >> maxSpeed;
    plane.setMaxSpeed(maxSpeed);
    cin.ignore();

    cout << "Enter fuel capacity(L): ";
    cin >> fuelCapacity;
    plane.setFuelCapacity(fuelCapacity);
    cin.ignore();

    cout << "Enter flight range(km): ";
    cin >> flightRange;
    plane.setFlightRange(flightRange);
    cin.ignore();

    cout << "Enter capacity: ";
    cin >> capacity;
    plane.setCapacity(capacity);
    cin.ignore();
}

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));

    cout << "Enter the number of airplanes: ";
    int SIZE;
    cin >> SIZE;
    Airplane* planes = new Airplane[SIZE];
    cin.ignore();

    cout << "Enter data for " << SIZE << " airplanes\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "plane " << i + 1 << endl;
        inputAirplaneData(planes[i]);
        cout << endl;
    }

    planes->displayArrayInfo(planes, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        int rand35 = rand() % 35 + 1;
        cout << "Adding " << rand35 << " passengers to plane " << i + 1 << endl;
        planes[i].addPassenger(rand35);
    }

    planes->displayArrayInfo(planes, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        int rand35 = rand() % 35 + 1;
        cout << "Removing " << rand35 << " passengers from plane " << i + 1 << endl;
        planes[i].removePassenger(rand35);
    }

    planes->displayArrayInfo(planes, SIZE);

    delete[] planes;

    return 0;

}