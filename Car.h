#pragma once
#include <iostream>
using namespace std;

class Car {
    private:
        int price;
        int emissions;   // CO2 Emissions
    public:
    Car() : price(0), emissions(0) {};
    Car(int price) : price(price), emissions(0) {};   // creates a Car with a price
    
    virtual void drive(int kms){
        emissions = 20 * kms;
    };

    void set_price(int newPrice){
        price = newPrice;
    }

    int get_price(){
        return price;
    }

    void set_emissions(int newEmissions){
        emissions = newEmissions;
    }

    int get_emissions(){
        return emissions;
    }


};