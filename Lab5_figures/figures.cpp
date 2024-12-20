
//  Lab5_figures
//  Created by Bianca Amoako
//  2/20/23.

#include <iostream>
#include "figures.hpp"

using namespace std;

int main() {
    
    cout << "Choose an option for figure shape \n";
    cout << "1. Filled Square \n";
    cout << "2. Hollow Square \n";
    cout << "3. Back Slash \n";
    cout << "4. Forward Slash \n";
    cout << "5. Criss Cross Square \n";
    int fig_option;
    cin >> fig_option;
    
    cout << "Input an integer for the figure size ";
    int fig_size;
    cin >> fig_size;
    
    cout << "Input a character for the paint character ";
    char p_char;
    cin >> p_char;
    
    while (fig_option != 0 || fig_option < 6){
        switch (fig_option) {
            case 1:
                fill_square (fig_size, p_char);
                break;
            case 2:
                hollow_square (fig_size, p_char);
                break;
            case 3:
                back_slash (fig_size, p_char);
                break;
            case 4:
                forward_slash (fig_size, p_char);
                break;
            case 5:
                criss_cross (fig_size, p_char);
                break;
                
        }
        cout << "Choose an option for figure shape \n";
        cout << "1. Filled Square \n";
        cout << "2. Hollow Square \n";
        cout << "3. Back Slash \n";
        cout << "4. Forward Slash \n";
        cout << "5. Criss Cross Square \n";
        cin >> fig_option;
        
    }
}
