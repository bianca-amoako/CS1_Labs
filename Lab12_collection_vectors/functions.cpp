#include <iostream>
#include <vector>
#include "CollectionVectors.hpp"
using namespace std;

int size(vector<int>& v){
    cout << v.size();
    return size_t();
} // returns the size of the vector

int check(int number, vector<int>& v){
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), number);
    cout << "made it here";
    if(it != v.end()){
        cout << "found";
        return int (it - v.begin());
    }
    cout << "not found";
    return -1;
} // returns index of element containg "number" or -1 if none

void addNumber(double number, vector<int>& v){
        v.push_back(number);
}    // adds number to the collection

void removeNumber(double number, vector<int>& v){
    vector<int> newv;
    vector<int>::iterator it;
    it = find(v.begin(), v.end(), number);
    if(it != v.end()){
        for(size_t i = 0; i < v.size(); ++i){
            newv[i] = v[i];
            if(v[i] == number)
                newv[i] = v[i+1];
        }
    }
} // deletes the number from the collection

void output(vector<int>& v){
    for(size_t i = 0; i < v.size(); ++i){
        cout << v[i];
    }
}  // prints the values of the collection
