//
//  main.cpp
//  prac_multi
//
//  Created by Bianca Amoako on 2/13/23.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "calc.hpp"

using namespace std;

int main() {
    cout << "Please enter the operation you would like to perform \n";
    cout << "1. Absolute Value \n";
    cout << "2. Square Root \n";
    cout << "3. Cube Root \n";
    cout << "4. Power \n";
    int oper;
    cin >> oper;
    calc_oper(oper);
    
    
}

