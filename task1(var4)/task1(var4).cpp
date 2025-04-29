#include <iostream>

using namespace std;

class Airplane
{
private:
    string manufacturer;
    string model;
    string type;
    double maxSpeed;
    double fuelCapacity;
    int flightRange;
    int capacity;
    int freeSeats;
public:
    Airplane(string newManufacturer, string newModel, string newType, double newMaxSpeed, double newFuelCapacity, int newflightRange, int newCapacity)
        : manufacturer(newManufacturer), model(newModel), type(newType), maxSpeed(newMaxSpeed),
        fuelCapacity(newFuelCapacity), flightRange(newflightRange), capacity(newCapacity), freeSeats(newCapacity) {
    }

    void addPassenger(int people)
    {
        if (people > 0)
        {
            if (freeSeats - people >= 0)
            {
                freeSeats -= people;
            }
            else {
                cout << "There are not enough seats available.\n";
            }
        }
        else cout << "Number of passengers to add must be positive.\n";
    }

    void removePassenger(int people)
    {
        if (people > 0)
        {
            if (freeSeats + people <= capacity)
            {
                freeSeats += people;
            }
            else {
                cout << "Plane's capacity is full.\n";
            }
        }
        else cout << "Number of passengers to remove must be positive.\n";
    }

    void displayInfo() const
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

    string getManufacturer() const { return manufacturer; }
    string getModel() const { return model; }
    string getType() const { return type; }
    double getMaxSpeed() const { return maxSpeed; }
    double getFuelCapacity() const { return fuelCapacity; }
    int getFlightRange() const { return flightRange; }
    int getCapacity() const { return capacity; }
    int getFreeSeats() const { return freeSeats; }

    void setManufacturer(const string& newManufacturer) { manufacturer = newManufacturer; }
    void setModel(const string& newModel) { model = newModel; }
    void setType(const string& newType) { type = newType; }
    void setMaxSpeed(double newMaxSpeed) { maxSpeed = newMaxSpeed; }
    void setFuelCapacity(double newFuelCapacity) { fuelCapacity = newFuelCapacity; }
    void setFlightRange(int newFlightRange) { flightRange = newFlightRange; }
    void setCapacity(int newCapacity)
    {
        capacity = newCapacity;
        freeSeats = newCapacity;
    }
};

int main()
{
    Airplane boeing("Boeing", "Boeing 737-100", "Passenger", 917, 17865, 3440, 90);
    boeing.displayInfo();
    cout << endl;

    cout << "Free seats: " << boeing.getFreeSeats() << endl;
    boeing.addPassenger(10);
    cout << "Free seats: " << boeing.getFreeSeats() << endl;
    boeing.addPassenger(100);
    cout << "Free seats: " << boeing.getFreeSeats() << endl;
    boeing.removePassenger(5);
    cout << "Free seats: " << boeing.getFreeSeats() << endl;
    boeing.removePassenger(100);
    cout << "Free seats: " << boeing.getFreeSeats() << endl;
    cout << endl;

    cout << "Manufacturer: " << boeing.getManufacturer() << endl;
    cout << "Model: " << boeing.getModel() << endl;
    cout << "Type: " << boeing.getType() << endl;
    cout << "Max speed(km/hours): " << boeing.getMaxSpeed() << endl;
    cout << "Fuel capacity(L): " << boeing.getFuelCapacity() << endl;
    cout << "Flight range(km): " << boeing.getFlightRange() << endl;
    cout << "Capacity: " << boeing.getCapacity() << endl;
    cout << "Free seats: " << boeing.getFreeSeats() << endl;

    return 0;
}