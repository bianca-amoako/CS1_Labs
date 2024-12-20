// converts input of number date in January to words
// Bianca Amoako
//2/5/23.

#include <iostream>

using namespace std;
int main() {
    
    int date;
    
    cout << "Input a date in January from 1 to 31 ";
    cin >> date;
    
    const int ones = date % 10;
    const int tens = date / 10;
    
    // cout << date << ones << tens;
    if (tens == 1) {
        switch (ones) {
            case 0:
                cout << "TEN ";
                break;
            case 1:
                cout << "ELEVEN ";
                break;
            case 2:
                cout << "TWELVE ";
                break;
            case 3:
                cout << "THIRTEEN ";
                break;
            case 4:
                cout << "FOURTEEN ";
                break;
            case 5:
                cout << "FIFTEEN ";
                break;
            case 6:
                cout << "SIXTEEN ";
                break;
            case 7:
                cout << "SEVENTEEN ";
                break;
            case 8:
                cout << "EIGHTEEN ";
                break;
            case 9:
                cout << "NINETEEN ";
                break;
        }
        
    }
    
    else if (tens <= 3) {
        switch (tens) {
            case 0:
                break;
            case 2:
                cout << "TWENTY ";
                break;
            case 3:
                cout << "THIRTY ";
                break;
        }
        switch (ones) {
            case 0:
                break;
            case 1:
                cout << "ONE ";
                break;
            case 2:
                cout << "TWO ";
                break;
            case 3:
                cout << "THREE ";
                break;
            case 4:
                cout << "FOUR ";
                break;
            case 5:
                cout << "FIVE ";
                break;
            case 6:
                cout << "SIX ";
                break;
            case 7:
                cout << "SEVEN ";
                break;
            case 8:
                cout << "EIGHT ";
                break;
            case 9:
                cout << "NINE ";
                break;
        }
    }
    
}
