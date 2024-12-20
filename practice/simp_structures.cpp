//
//  main.cpp
//  si_strcut_prac
//
//  Created by Bianca Amoako on 3/15/23.
//

#include <iostream>
using namespace std;
struct num{
    double real;
    double imaginary;
};

struct letter{
    double second_num;
    num path;
};

int main() {
    letter a;
    a.second_num = 4;
    a.path.real = 6;
    a.path.imaginary = 8;
    
    cout << a.second_num + a.path.real << endl;
}
