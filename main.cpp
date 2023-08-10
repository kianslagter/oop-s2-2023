#include <iostream>
#include "workshop.hpp"
using namespace std;



int main() {
    double d = 1.234;
    char c = 'A';
    double *pd = &d;
    char *pc = &c;
    

    changeValue(pd);
    cout << d << endl;

    double array[10];
    double *parray = array;
    double *pparray = parray;
    printArray(&pparray, 10);

    double array2[4] = {1,2,3,4};
    cout << arrayMax(&array2, 4) << endl;
    
    double *newArray = dynamicArray(5, 2);
    printArray(&newArray, 5);
    cout << arrayMax(&newArray, 5) << endl;
    delete[] newArray;


    return 0;
}