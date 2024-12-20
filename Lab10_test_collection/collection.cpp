
#include <iostream>
#include "Collection.hpp"

using namespace std;

// prints the values in array "colPtr" of "size"
void output(const double *colPtr, const int size){
    int i;
    for(i = 0; i < size -1; i++){
        cout << colPtr[i] << " ";
    }
}
// returns the sum of all the values in array "colPtr" of "size"
double value(const double *colPtr, const int size){
    int i;
    double sum = 0;
    for(i = 0; i < size -1; i++){
        sum = colPtr[i] + sum;
    }
    return sum;
}
// returns the index of the element in array "colPtr" of "size"
// that corresponds to the element holding "number"
// if number is not in the array, returns -1
int check(const double *colPtr, const double number, const int size){
    int i = 0;
    while(i < size -1){
        i++;
        if(colPtr[i] == number){
            return i;
        }
    } return -1;
}
// adds "number" to the array pointed to by "colPtr" of "size".
// if the number is not already there, if "number" is there - no action
// Note, the size of the array is thus increased.
void addNumber(double *& colPtr, const double number, int &size){
    if (check(colPtr, number, size) == -1){
        size++;
        colPtr[size-2] = number;
    }
}
// removes a "number" from array "colPtr" of "size".
// if "number" is not there -- no action
// note, "size" changes
void removeNumber(double *& colPtr, const double number, int &size){
    int i;
    double *n_colPtr = new double[size];
    for(i = 0; i < size-1; i++){
        if(colPtr[i] == number)
            continue;
        else
            n_colPtr[i-1] = colPtr[i];
    }
    size--;
    delete [] colPtr;
    colPtr = n_colPtr;
}
