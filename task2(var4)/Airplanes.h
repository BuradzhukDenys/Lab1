#pragma once
class Airplane
{
private:
    std::string manufacturer;
    std::string model;
    std::string type;
    double maxSpeed;
    double fuelCapacity;
    int flightRange;
    int capacity;
    int freeSeats;
public:
    Airplane() = default;
    Airplane(std::string newManufacturer, std::string newModel, std::string newType, double newMaxSpeed, double newFuelCapacity, int newflightRange, int newCapacity);

    ~Airplane() = default;

    void addPassenger(int people);
    void removePassenger(int people);
    void displayInfo() const;
    void displayArrayInfo(const Airplane* planes, int size) const;

    std::string getManufacturer() const { return manufacturer; }
    std::string getModel() const { return model; }
    std::string getType() const { return type; }
    double getMaxSpeed() const { return maxSpeed; }
    double getFuelCapacity() const { return fuelCapacity; }
    int getFlightRange() const { return flightRange; }
    int getCapacity() const { return capacity; }
    int getFreeSeats() const { return freeSeats; }

    void setManufacturer(const std::string& newManufacturer) { manufacturer = newManufacturer; }
    void setModel(const std::string& newModel) { model = newModel; }
    void setType(const std::string& newType) { type = newType; }
    void setMaxSpeed(double newMaxSpeed) { maxSpeed = newMaxSpeed; }
    void setFuelCapacity(double newFuelCapacity) { fuelCapacity = newFuelCapacity; }
    void setFlightRange(int newFlightRange) { flightRange = newFlightRange; }
    void setCapacity(int newCapacity)
    {
        capacity = newCapacity;
        freeSeats = newCapacity;
    }
};