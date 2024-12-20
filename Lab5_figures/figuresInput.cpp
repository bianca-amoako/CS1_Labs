
//  Lab5_figures
//  Created by Bianca Amoako
//  2/20/23.

#include "figures.hpp"
#include <iostream>

using namespace std;

void fill_square (int fig_size, char fig_char){
    for (int x = 0; x < fig_size; x++){
        for (int y = 0; y < fig_size; y++){
            cout << fig_char;
        } cout << "\n";
    }
}

void hollow_square (int fig_size, char fig_char) {
    for (int x = 0; x < fig_size; x++){
        for (int y = 0; y < fig_size; y++){
            if (y == 0 || y == fig_size - 1 || x == 0 || x == fig_size -1) {
                cout << fig_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
    }
}

void back_slash (int fig_size, char fig_char) {
    for (int x = 0; x < fig_size; x++){
        for (int y = 0; y < fig_size; y++){
            if (x == y){
                cout << fig_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
    }
}
    
void forward_slash (int fig_size, char fig_char) {
    for (int x = 0; x < fig_size; x++){
        for (int y = fig_size; y > 0; y--){
            if (x == y){
                cout << fig_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
    }
}

void criss_cross (int fig_size, char fig_char){
    for (int x = 0; x < fig_size; x++){
        for (int y = 0; y < fig_size; y++){
            if (x == y || y == 0 || y == fig_size - 1 || x == 0 || x == fig_size -1 || x == fig_size -y -1){
                cout << fig_char;
            }
            else {
                cout << " ";
            }
        } cout << "\n";
    }
}

