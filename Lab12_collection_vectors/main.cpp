//  main.cpp
//  Lab12_CollectionVectors
//  Created by Bianca Amoako on 5/2/23.

#include <iostream>
#include <vector>
#include "CollectionVectors.hpp"

using namespace std;

int main() {
    vector<int> vcoll = {5};
    char operation;
    double number;
    cout << "Dan, enter an operation [a/r/q] and a number ";
    cin >> operation >> number;
    while(operation == 'a' | operation == 'r' | operation == 'q'){
        if(operation == 'a'){
            vcoll.push_back(number);
            cout << "Dan's Collection: ";
            output(vcoll); cout << " " << endl;
            cout << "Dan, enter an operation [a/r/q] and a number ";
            cin >> operation >> number;
        }
        else if(operation == 'r'){
            removeNumber(number, vcoll);
            cout << "Dan's Collection: "; output(vcoll); cout << endl;
            cout << "Dan, enter an operation [a/r/q] and a number ";
            cin >> operation >> number;
        }
        else if(operation == 'q'){
            cout << "collection closed " << endl;
            break;
        }
        else if(operation == 'c'){
            check(number, vcoll);
        }
        else if(operation == 's'){
            size(vcoll);
        }
        }
    }

