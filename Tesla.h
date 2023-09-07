#pragma once
#include <iostream>
#include "Car.h"
using namespace std;

class Tesla : public Car {
    private:
        char model;
        float batteryPercentage;      // Initially 100%
    public:
    Tesla() : Car(0), model() {};
    Tesla(char model, int price) : model(model), Car(price), batteryPercentage(100) {};
    
    void drive(int kms){
        int distance = 0;
        while (batteryPercentage > 0 && distance < kms){
        
            int e = get_emissions();
            set_emissions(e + 0.074);
            batteryPercentage = batteryPercentage - 0.2;
    }
    };

    void chargeBattery(int mins){
        if (batteryPercentage <= 100){
            batteryPercentage = batteryPercentage + (0.5 * mins);
        }
    };  

    void set_model(int newModel){
        model = newModel;
    }

    int get_model(){
        return model;
    }

    void set_batteryPercentage(int newBatteryPercentage){
        if(newBatteryPercentage <= 0){
            batteryPercentage = 0;
        }
        else if (newBatteryPercentage >= 100){
            batteryPercentage = 100;
        } 
        else{
            batteryPercentage = newBatteryPercentage;
        }   
    }

    float get_batteryPercentage(){
        return batteryPercentage;
    }

};