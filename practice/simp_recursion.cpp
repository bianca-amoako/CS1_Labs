//
//  main.cpp
//  SI_recursion_prac
//
//  Created by Bianca Amoako on 3/20/23.
//

#include <iostream>
using namespace std;

long int factorial(long int x){
    if(x == 1)
        return 1;
    else
        return x * factorial(x-1);
}
int main() {
    cout << "Enter a number for factorial: ";
    long int num;
    cin >> num;
    factorial(num);
    cout << factorial(num) << endl;
}
