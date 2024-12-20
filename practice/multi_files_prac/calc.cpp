//
//  calc.cpp
//  prac_multi
//
//  Created by Bianca Amoako on 2/13/23.
#include <iostream>
#include <cmath>
#include <cstdlib>
#include "calc.hpp"
using std::cout;
using std::cin;
using std::endl;
void calc_oper(int oper){
    while (oper > 0 && oper <= 4){
        cout << "Input the number you would like to compute \n";
        int user_num;
        cin >> user_num;
        double answer;
        switch (oper) {
            case 1:
                answer = abs(user_num);
                cout << answer << endl;
                break;
            case 2:
                answer = sqrt(user_num);
                cout << answer << endl;
                break;
            case 3:
                answer = cbrt(user_num);
                cout << answer << endl;
                break;
            case 4:
                cout << "What would you like to raise your number to? \n";
                double user_exp;
                cin >> user_exp;
                answer = pow(user_num, user_exp);
                cout << answer << endl;
                break;
        }
        
        cout << "Please enter the operation you would like to perform \n";
        cout << "1. Absolute Value \n";
        cout << "2. Square Root \n";
        cout << "3. Cube Root \n";
        cout << "4. Power \n";
        cin >> oper;
    }
}
