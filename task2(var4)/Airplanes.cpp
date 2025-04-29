#include <iostream>
#include "Airplanes.h"

using namespace std;

Airplane::Airplane(string newManufacturer, string newModel, string newType, double newMaxSpeed, double newFuelCapacity, int newflightRange, int newCapacity)
    : manufacturer(newManufacturer), model(newModel), type(newType), maxSpeed(newMaxSpeed),
    fuelCapacity(newFuelCapacity), flightRange(newflightRange), capacity(newCapacity), freeSeats(newCapacity) {
}

void Airplane::addPassenger(int people)
{
    if (people > 0)
    {
        if (freeSeats - people >= 0)
        {
            freeSeats -= people;
        }
        else
        {
            cout << "There are not enough seats available.\n";
        }
    }
}

void Airplane::removePassenger(int people)
{
    if (people > 0)
    {
        if (freeSeats + people <= capacity)
        {
            freeSeats += people;
        }
        else
        {
            cout << "Plane's capacity is full.\n";
        }
    }
}

void Airplane::displayInfo() const
{
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Model: " << model << endl;
    cout << "Type: " << type << endl;
    cout << "Max speed(km/hours): " << maxSpeed << endl;
    cout << "Fuel capacity(L): " << fuelCapacity << endl;
    cout << "Flight range(km): " << flightRange << endl;
    cout << "Capacity: " << capacity << endl;
    cout << "Free seats: " << freeSeats << endl;
}

void Airplane::displayArrayInfo(const Airplane* planes, int size) const
{
    for (int i = 0; i < size; i++)
    {
        planes[i].displayInfo();
		cout << "------------------------------------\n";
    }
}
