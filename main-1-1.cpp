#include <ctime>
#include <iostream>
#include <vector>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "Vehicle.h"
using namespace std;

int main() {
    vector<Vehicle*> vehicles;
    int numCars, numBuses, numMotorbikes;
    
    cout << "Number of cars: ";
    cin >> numCars;
    
    for (int i = 0; i < numCars; i++) {
        vehicles.push_back(new Car(i));
    }
    
    cout << "Number of buses: ";
    cin >> numBuses;
    
    for (int i = 0; i < numBuses; i++) {
        vehicles.push_back(new Bus(i));
    }
    
    cout << "Number of motorbikes: ";
    cin >> numMotorbikes;
    
    for (int i = 0; i < numMotorbikes; i++) {
        vehicles.push_back(new Motorbike(i));
    }
    
    for (Vehicle* vehicle : vehicles) {
        cout << "Vehicle with ID " << vehicle->getID() << " has been parked for " << vehicle->getParkingDuration() << " seconds." << endl;
        delete vehicle;
    }
    
    return 0;
}