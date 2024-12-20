//
//  mian.cpp
//  Lab11_DansCollectionClasses
//
//  Created by Bianca Amoako on 4/17/23.
//

#include <iostream>
#include "collection.hpp"
using namespace std;

int main(){
    Collection c1;
    char operation;
    double number;
    cout << "Dan, enter an operation [a/r/q] and a number ";
    cin >> operation >> number;
    while(operation == 'a' | operation == 'r' | operation == 'q'){
        if(operation == 'a'){
            c1.addNumber(number);
            cout << "Dan's Collection: "; c1.output(); cout << endl;
            cout << "Dan, enter an operation [a/r/q] and a number ";
            cin >> operation >> number;
        }
        else if(operation == 'r'){
            c1.removeNumber(number);
            cout << "Dan's Collection: "; c1.output(); cout << endl;
            cout << "Dan, enter an operation [a/r/q] and a number ";
            cin >> operation >> number;
        }
        else if(operation == 'q'){
            cout << "collection closed " << endl;
            break;
        }
    }
}

