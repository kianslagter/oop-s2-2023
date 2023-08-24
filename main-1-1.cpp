#include <iostream>
#include <string>

#include "House.h"
using namespace std;

int main() {
    House h1;
    House h2("Brian", 3);
    

    string name1 = h1.get_owner_name();
    int num1 = h1.get_lot_number();
    cout << "House " << num1 << " is owned by " << name1 << endl;

    string name2 = h2.get_owner_name();
    int num2 = h2.get_lot_number();
    cout << "House " << num2 << " is owned by " << name2 << endl;

}