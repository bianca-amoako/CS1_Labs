// computes the sum of even integers user inputs
// Bianca Amoako
// 2/6/23

#include <iostream>

using namespace std;

int main() {
    int num; int sum = 0;
    cout << "Input a sequence of numbers, input zero to end sequence ";
    cin >> num;
    
    while (num != 0) {
        if (num % 2 == 0){
            sum += num;
        }
        cin >> num;
    } cout << "The sum of even numbers is " << sum << endl;
}
