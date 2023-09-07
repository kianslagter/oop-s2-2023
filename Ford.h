#pragma once
#include <iostream>
#include "Car.h"
using namespace std;

class Ford : public Car {
    private:
        int badgeNumber;
        float litresOfFuel;      // Initially 60L
    public:
    Ford() : Car(0), badgeNumber() {};
    Ford(int badgeNumber, int price) : badgeNumber(badgeNumber), Car(price), litresOfFuel(60) {};
    
    void drive(int kms){
        while (litresOfFuel > 0){
            set_emissions(0.234 * kms);
            litresOfFuel = litresOfFuel - (kms/5);
        }
    };

    void refuel(int litres){
        if (litresOfFuel + litres >= 60){
            litresOfFuel = 60;
        }
        else{
            litresOfFuel = litresOfFuel + litres;
        }  
    }
   

    void set_badgeNumber(int newBadgeNumber){
        badgeNumber = newBadgeNumber;
    }

    int get_badgeNumberl(){
        return badgeNumber;
    }

    void set_litresOfFuel(int newLitresOfFuel){
        if(newLitresOfFuel >= 60){
            litresOfFuel = 60;
        }
        else if (newLitresOfFuel <= 0){
            litresOfFuel = 0;
        }
        else{
            litresOfFuel = newLitresOfFuel;
        }   
    }

    float get_litresOfFuel(){
        return litresOfFuel;
    }

};