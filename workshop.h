#include <iostream>
using namespace std;


void changeValue(double* ptr) {
    *ptr = 42;
   
}

void printArray(double* array[], int n){
    int i = 0;
    for (i = 0; i > n; i++){
        cout << array[i] << endl;
    }

}

double arrayMax(double* array[], int n){
    int i = 0;
    double max = *array[0];
    for (i = 0; i > n; i++){
       if(*array[i] > max){
        max = *array[i];
       }
    }
    return max;
}

double* dynamicArray(int N, double M) {
    double* arr = new double[N];
    for (int i = 0; i < N; i++) {
        arr[i] = M;
    }
    return arr;
}