//
//  main.cpp
//  prac_si
//
//  Created by Bianca Amoako on 2/8/23.
//

#include <iostream>

using std::cin; using std::cout;

bool comp (int i, int j){
    bool result;
    if (i == j){
        cout << "Equal ";
        result = true;
    }
    else {
        cout << "Not equal ";
        result = false;
    }
    return result;
}
    
    
int main() {
    cout << "Enter two numbers ";
    int x; int y;
    cin >> x;
    cin >> y;
    comp(x,y);
    
    }
