// game to guess age of troll to free prince
// Bianca Amoako
// 2/15/23.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    //set year and random age
    srand(int(time(nullptr)));
    int troll_age = 100 + (rand() % 100);
    int year = 1000;  //inital year
    //cout << troll_age << ", " << year << endl;
    //dialogue
    cout << "Year 1000: Hello, fair maiden. I am an ugly old troll. To see your prince answer this question. How old am I? ";
    int guess;
    cin >> guess;
    
    while (guess != troll_age){
    
        //if else statement
        if (guess > troll_age){
            year += 5;
            troll_age += 5;
            //cout << year << " " << troll_age << endl;
            cout << "Wrong, I am younger. See you in 5 years... " << endl;
            cout << "Year " << year << ": Hello again, fair maiden. How old am I? ";
            cin >> guess;
        }
        else if (guess < troll_age){
            year += 5;
            troll_age += 5;
            //cout << year << " " << troll_age << endl;
            cout << "Wrong, I am older. See you in 5 years... " << endl;
            cout << "Year " << year << ": Hello again, fair maiden. How old am I? ";
            cin >> guess;
        }
    }
    cout << "You are correct. Here is your prince. ";
}
