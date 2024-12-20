//
//  Bianca Amoako on 2/6/23.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Input an integer for the figure size ";
    int fig_size;
    cin >> fig_size;
    
    cout << "Input a character for the paint character ";
    char p_char;
    cin >> p_char;
    
    int x;
    int y;
    for (x = 0; x < fig_size; x++){
        for (y = 0; y < fig_size; y++){
            cout << p_char;
        } cout << "\n";
    }
    //hollow
    for (x = 0; x < fig_size; x++){
        for (y = 0; y < fig_size; y++){
            if (y == 0 || y == fig_size - 1 || x == 0 || x == fig_size -1) {
                cout << p_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
    }
    //backslash
    for (x = 0; x < fig_size; x++){
        for (y = 0; y < fig_size; y++){
            if (x == y){
                cout << p_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
        }
    //forward slash
    for (x = 0; x < fig_size; x++){
        for (y = fig_size; y > 0; y--){
            if (x == y){
                cout << p_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
        }
    //crisscross
    for (x = 0; x < fig_size; x++){
        for (y = 0; y < fig_size; y++){
            if (x == y || y == 0 || y == fig_size - 1 || x == 0 || x == fig_size -1 | x == fig_size -y -1){
                cout << p_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
    }
    }
