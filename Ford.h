#pragma once
#include <iostream>
#include <cmath>
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
        int distance = 0;
        int e = 0;
        while (litresOfFuel > 0 && distance < kms){
            set_emissions(e + 0.234);
            litresOfFuel = litresOfFuel - 0.2;
            distance++;
    }
    }

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
        float roundFuel = 0; 
        if(litresOfFuel < 0){
            roundFuel = 0;
        }
        else{
           roundFuel = (litresOfFuel * 10) / 10;
        }
        return roundFuel;
    }

};